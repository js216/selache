// SPDX-License-Identifier: MIT
// cctest_csmith_fe1470a1.c --- cctest case csmith_fe1470a1 (csmith seed 4262752417)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x76b4da6a */

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

// Options:   -s 4262752417 -o /tmp/csmith_gen_7_u4dyec/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint16_t  f0;
   const int32_t  f1;
   int64_t  f2;
   int16_t  f3;
   uint32_t  f4;
   int16_t  f5;
};

union U1 {
   int8_t  f0;
   struct S0  f1;
   struct S0  f2;
};

union U2 {
   const signed f0 : 24;
   int8_t * f1;
   const int64_t  f2;
};


static int32_t g_2 = 9L;
static int32_t g_6 = 0x50DB8561L;
static int32_t g_9 = (-1L);
static int8_t g_22 = 0xE4L;
static uint8_t g_25[4][5] = {{0xF1L,0UL,0xB7L,0xB7L,0UL},{0x78L,8UL,255UL,255UL,8UL},{0xF1L,0UL,0xB7L,0xB7L,0UL},{0x78L,8UL,255UL,255UL,8UL}};
static uint8_t *g_43[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static const struct S0 g_47 = {5UL,1L,0x1F8487B254764FE6LL,0x5A42L,0x69719EFCL,8L};
static uint16_t g_78[5] = {0x2EE3L,0x2EE3L,0x2EE3L,0x2EE3L,0x2EE3L};
static union U2 g_83[4][2][4] = {{{{1L},{1L},{-1L},{0L}},{{0L},{0x3E1243B3L},{0L},{-1L}}},{{{0xD03C5CECL},{0xEEA102A8L},{-2L},{0xD03C5CECL}},{{1L},{-1L},{0x20126639L},{0xEEA102A8L}}},{{{-1L},{1L},{0x2FBB2F22L},{0x2FBB2F22L}},{{-1L},{-1L},{0xD03C5CECL},{-1L}}},{{{0x20126639L},{5L},{0x0C1A6FE1L},{0L}},{{0x0C1A6FE1L},{0L},{0x416AF0CFL},{0x0C1A6FE1L}}}};
static union U2 *g_82 = &g_83[0][1][0];
static uint16_t *g_89[2] = {&g_78[1],&g_78[1]};
static uint16_t ** const g_88 = &g_89[0];
static int8_t g_110 = 0x4BL;
static uint16_t **g_129 = &g_89[0];
static uint16_t ***g_128 = &g_129;
static uint16_t ****g_127[1] = {&g_128};
static uint16_t g_136[3] = {0x5370L,0x5370L,0x5370L};
static union U1 g_142 = {0L};
static uint64_t g_160 = 1UL;
static uint16_t g_181 = 0xBD9AL;
static uint16_t g_188 = 0x4ABBL;
static uint8_t g_197[4] = {0xD5L,0xD5L,0xD5L,0xD5L};
static int8_t * const g_211[1] = {&g_110};
static int8_t * const *g_210 = &g_211[0];
static uint8_t g_218 = 0x71L;
static int16_t g_236 = 8L;
static const int32_t *g_248 = (void*)0;
static uint64_t g_316 = 0xF5BCED175345269ALL;
static uint8_t g_364 = 3UL;
static int32_t g_369 = 0xF78BCFD7L;
static union U1 g_378 = {3L};
static uint64_t g_430 = 0x5CE5605D7226BE9ELL;
static int32_t **g_476 = (void*)0;
static uint8_t g_508 = 0xF0L;
static int32_t g_533 = 0x3103372BL;
static uint32_t g_535 = 0xE6BB63A7L;
static uint64_t g_547 = 0x76F1746800347195LL;
static int32_t g_572 = 0x2586E075L;
static uint16_t g_573 = 65535UL;
static int8_t g_582[4][7][5] = {{{0x3DL,(-1L),0xAFL,0x1AL,(-10L)},{(-1L),0xA4L,0x02L,(-1L),(-1L)},{(-1L),0x54L,(-1L),0x6EL,0x2EL},{0x8BL,0L,(-6L),0L,(-1L)},{0x54L,0x2BL,0L,0xFAL,0L},{0x20L,0x2EL,0L,0x54L,(-1L)},{0xEBL,0xD4L,(-6L),9L,(-1L)}},{{0xDAL,(-1L),(-1L),(-5L),0xAFL},{0x22L,0xDAL,0x02L,0x02L,0xDAL},{0x34L,0x85L,0xAFL,0x0EL,0x80L},{4L,(-1L),(-5L),(-1L),0x3DL},{0x18L,(-9L),0xD4L,0L,0x8FL},{4L,0x0EL,1L,0xDEL,(-1L)},{0x34L,0L,0x54L,(-1L),0xD4L}},{{0x22L,(-8L),0x1AL,1L,0x02L},{0xDAL,0L,(-1L),(-1L),0xF1L},{0xEBL,(-1L),0x85L,(-1L),(-9L)},{0x20L,0x5DL,0xD2L,(-1L),1L},{0x54L,0x3DL,0x80L,(-1L),0xD2L},{0x8BL,(-1L),0x34L,1L,0xDEL},{(-1L),(-1L),0x0EL,(-1L),0x0EL}},{{(-1L),(-1L),0x6EL,0xDEL,0x9EL},{0x3DL,0x20L,(-1L),0L,0x34L},{0xF1L,(-1L),0x15L,(-1L),0xC0L},{(-1L),0x20L,0xDEL,0x0EL,0xBBL},{0L,(-1L),0xA4L,0x02L,(-1L)},{(-10L),(-1L),0xFAL,(-5L),0L},{0xFAL,(-1L),9L,9L,0xEBL}}};
static int8_t g_584 = 0xB8L;
static uint16_t g_645 = 1UL;
static int64_t g_675 = 0x6440AD552CD30D2CLL;
static int32_t g_676 = 0x1052512DL;
static uint16_t g_677 = 0x9B17L;
static uint32_t *g_700[6][6][6] = {{{&g_535,&g_535,&g_535,(void*)0,&g_535,&g_535},{&g_535,&g_535,&g_535,(void*)0,(void*)0,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535}},{{&g_535,&g_535,&g_535,&g_535,(void*)0,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,(void*)0,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535}},{{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,(void*)0,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535}},{{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,(void*)0,&g_535}},{{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,(void*)0,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535}},{{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,(void*)0,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535}}};
static uint32_t **g_699 = &g_700[4][0][5];
static uint32_t g_827 = 0x70A61465L;
static uint32_t g_851 = 0x76FDF1D5L;
static struct S0 **g_878[5][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
static const union U1 *g_897 = (void*)0;
static const union U1 **g_896 = &g_897;
static union U1 g_932 = {2L};
static union U1 *g_931 = &g_932;
static union U1 **g_946 = &g_931;
static union U1 ***g_945 = &g_946;
static union U1 g_969 = {0x44L};
static struct S0 g_984 = {0xF05CL,0x8A057039L,1L,-1L,0x5E876C29L,0x633BL};
static uint16_t g_1027 = 0x1746L;
static int16_t g_1097 = 0x3917L;
static int32_t g_1098 = 0xF048AD20L;
static int64_t g_1099 = 0x34C0972C11212B87LL;
static uint32_t g_1100 = 1UL;
static int8_t g_1114 = 0L;
static uint64_t g_1115 = 1UL;
static int16_t g_1125[1][3] = {{(-1L),(-1L),(-1L)}};
static int64_t g_1126 = (-6L);
static int64_t g_1129 = (-1L);
static uint64_t g_1130 = 18446744073709551607UL;
static union U2 g_1142 = {0x801BDF7FL};
static int32_t g_1177 = 0xCD9CB25CL;
static union U2 **g_1181 = &g_82;
static union U2 ***g_1180[2] = {&g_1181,&g_1181};
static uint32_t g_1200[6][2][7] = {{{0xD2710291L,0xD2710291L,0x0C2E0F23L,0xD2710291L,0xD2710291L,0x0C2E0F23L,0xD2710291L},{0xD2710291L,0x6FC07B40L,0x6FC07B40L,0xD2710291L,0x6FC07B40L,0x6FC07B40L,0xD2710291L}},{{0x6FC07B40L,0xD2710291L,0x6FC07B40L,0x6FC07B40L,0xD2710291L,0x6FC07B40L,0x6FC07B40L},{0xD2710291L,0xD2710291L,0x0C2E0F23L,0xD2710291L,0xD2710291L,0x0C2E0F23L,0xD2710291L}},{{0xD2710291L,0x6FC07B40L,0x6FC07B40L,0xD2710291L,0x6FC07B40L,0x6FC07B40L,0xD2710291L},{0x6FC07B40L,0xD2710291L,0x6FC07B40L,0x6FC07B40L,0xD2710291L,0x6FC07B40L,0x6FC07B40L}},{{0xD2710291L,0xD2710291L,0x0C2E0F23L,0xD2710291L,0xD2710291L,0x0C2E0F23L,0xD2710291L},{0xD2710291L,0x6FC07B40L,0x6FC07B40L,0xD2710291L,0x6FC07B40L,0x6FC07B40L,0xD2710291L}},{{0x6FC07B40L,0xD2710291L,0x6FC07B40L,0x6FC07B40L,0xD2710291L,0x6FC07B40L,0x6FC07B40L},{0xD2710291L,0xD2710291L,0x0C2E0F23L,0xD2710291L,0xD2710291L,0x0C2E0F23L,0xD2710291L}},{{0xD2710291L,0x6FC07B40L,0x6FC07B40L,0xD2710291L,0x6FC07B40L,0x6FC07B40L,0xD2710291L},{0x6FC07B40L,0xD2710291L,0x6FC07B40L,0x6FC07B40L,0xD2710291L,0x6FC07B40L,0x6FC07B40L}}};
static int16_t *g_1212 = (void*)0;
static uint64_t g_1358 = 0xF64E431CD0D8E08FLL;
static uint64_t g_1430 = 18446744073709551615UL;
static int32_t *g_1470 = &g_572;
static int8_t **g_1549 = (void*)0;
static int8_t ***g_1548 = &g_1549;
static int16_t g_1881 = 0L;
static int8_t g_1883 = 0x05L;
static int32_t g_1885 = 0xAC7F8153L;
static uint16_t g_1887[5][4] = {{0UL,0xAD5EL,0xAD5EL,0UL},{0xAD5EL,0UL,1UL,0xABE7L},{0xAD5EL,1UL,0xAD5EL,7UL},{0UL,0xABE7L,7UL,7UL},{1UL,1UL,0x38BAL,0xABE7L}};
static uint8_t **g_1898 = &g_43[2];
static uint8_t ***g_1897[7] = {&g_1898,&g_1898,&g_1898,&g_1898,&g_1898,&g_1898,&g_1898};
static int32_t g_1915 = 9L;
static int16_t **g_1916 = &g_1212;
static int32_t * const ***g_1949 = (void*)0;
static int8_t g_1952 = 0x7EL;
static int64_t g_1953 = 0xACDE266A43B9B638LL;
static uint64_t g_1954 = 1UL;
static uint32_t g_1962 = 0x2A42D437L;



static const union U1  func_1(void);
static uint8_t  func_15(int16_t  p_16, int8_t * p_17, uint8_t  p_18, int8_t * p_19, int32_t * p_20);
static struct S0  func_28(struct S0  p_29, int16_t  p_30, const int32_t  p_31, int32_t * p_32, int64_t  p_33);
static struct S0  func_34(int8_t * p_35, uint8_t * p_36, int8_t * p_37);
static union U1  func_38(uint8_t * p_39, uint32_t  p_40, const struct S0  p_41, const int32_t * p_42);
static int32_t  func_49(int32_t  p_50, struct S0  p_51, uint16_t  p_52, uint8_t * p_53);
static struct S0  func_55(int8_t * p_56, uint8_t  p_57, const uint16_t  p_58, int16_t  p_59);
static int8_t * func_65(union U2  p_66, int8_t * p_67, int32_t  p_68, int8_t * const  p_69, int8_t  p_70);




static const union U1  func_1(void)
{ 
    int32_t l_7[7][5] = {{0L,0L,1L,0L,0x0CD9D754L},{0x28A062B0L,0L,(-3L),0xC2DA8AFCL,0x0CD9D754L},{0L,0x28A062B0L,(-3L),0L,(-3L)},{0L,0L,1L,0L,0x0CD9D754L},{0x28A062B0L,0L,(-3L),0xC2DA8AFCL,0x0CD9D754L},{0L,0x28A062B0L,(-3L),0L,(-3L)},{0L,0L,1L,0L,0x0CD9D754L}};
    int32_t l_14 = 4L;
    int8_t *l_21 = &g_22;
    int32_t l_23 = 0x467B47E0L;
    uint8_t *l_24 = &g_25[0][1];
    union U1 l_44 = {0xBEL};
    int8_t *l_1629 = &g_582[3][3][4];
    int8_t **l_1630 = &l_1629;
    int16_t l_1654 = (-10L);
    int16_t *l_1694 = &g_1125[0][0];
    const uint64_t l_1695 = 0x14F4515FE2307CBCLL;
    const struct S0 l_1697 = {65530UL,0xDCD02193L,0x68F9ECD7305AAFCCLL,0x2763L,1UL,-10L};
    int16_t l_1768 = 1L;
    uint32_t l_1769 = 1UL;
    uint16_t ***l_1773 = &g_129;
    uint16_t ***l_1775 = &g_129;
    struct S0 ***l_1785 = &g_878[1][0];
    uint64_t l_1872[6] = {18446744073709551615UL,0x522B8B25C752505BLL,18446744073709551615UL,18446744073709551615UL,0x522B8B25C752505BLL,18446744073709551615UL};
    int32_t ***l_1925 = &g_476;
    int32_t ****l_1924 = &l_1925;
    int i, j;
    for (g_2 = 0; (g_2 <= (-22)); g_2--)
    { 
        int32_t *l_5 = &g_6;
        int32_t *l_8 = &g_9;
        (*l_5) &= 0L;
        (*l_8) = ((*l_5) &= l_7[3][1]);
    }
    if ((safe_div_func_uint8_t_u_u((((((*l_1694) = (safe_add_func_int64_t_s_s(((l_14 = 0x3FL) && func_15(l_14, l_21, (--(*l_24)), l_24, (func_28(func_34(((*l_1630) = (func_38(g_43[1], (l_44 , ((safe_sub_func_uint8_t_u_u(0xAEL, g_22)) , g_22)), g_47, &l_23) , l_1629)), &g_364, l_24), l_14, g_78[2], &l_14, l_1654) , (void*)0))), 1L))) , l_1695) , l_1654) , l_1654), l_7[3][1])))
    { 
        int8_t l_1696[5][6] = {{0x13L,(-10L),0x13L,0x13L,(-10L),0x13L},{0x13L,(-10L),0x13L,0x13L,(-10L),0x13L},{0x13L,(-10L),0x13L,0x13L,(-10L),0x13L},{0xE1L,0x13L,0xE1L,0xE1L,0x13L,0xE1L},{0xE1L,0x13L,0xE1L,0xE1L,0x13L,0xE1L}};
        int32_t *l_1698 = &g_572;
        uint16_t * const ****l_1710 = (void*)0;
        int32_t l_1746 = 0x6518E3A1L;
        struct S0 *l_1772 = &g_984;
        struct S0 **l_1771 = &l_1772;
        uint16_t ****l_1774 = &l_1773;
        uint32_t l_1832[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
        uint16_t l_1862 = 0xE427L;
        int8_t l_1871 = 0xA2L;
        int8_t l_1884 = (-1L);
        int32_t l_1886[6] = {0xD4971303L,0xD4971303L,0xD4971303L,0xD4971303L,0xD4971303L,0xD4971303L};
        uint32_t l_1894 = 0xB5E6CBA0L;
        int32_t *l_1909[7][5][2] = {{{&g_572,&l_1746},{(void*)0,&l_1746},{(void*)0,&l_1746},{&g_572,(void*)0},{&l_1746,&l_14}},{{&g_572,&l_1746},{&l_1746,(void*)0},{(void*)0,&g_6},{&g_572,(void*)0},{&g_6,(void*)0}},{{&g_572,&g_6},{(void*)0,(void*)0},{&l_1746,&l_1746},{&g_572,&l_14},{&l_1746,(void*)0}},{{&g_572,&l_1746},{(void*)0,&l_1746},{(void*)0,&l_1746},{&g_572,(void*)0},{&l_1746,&l_14}},{{&g_572,&l_1746},{&l_1746,(void*)0},{(void*)0,&g_6},{&g_572,(void*)0},{&g_6,(void*)0}},{{&g_572,&g_6},{(void*)0,(void*)0},{&l_1746,&l_1746},{&g_572,&l_14},{&l_1746,(void*)0}},{{&g_572,&l_1746},{(void*)0,&l_1746},{(void*)0,&l_1746},{&g_572,(void*)0},{&l_1746,&l_14}}};
        int64_t *l_1910 = &g_675;
        int32_t l_1917 = (-3L);
        int i, j, k;
        if ((((*l_1694) |= (func_38(&g_25[0][1], l_1696[3][2], l_1697, (g_248 = (void*)0)) , ((void*)0 != &g_6))) == (***g_128)))
        { 
            (*g_1470) = (*g_1470);
            l_1698 = l_1698;
        }
        else
        { 
            const int32_t l_1709 = 0xCFB71152L;
            uint16_t *****l_1711[1];
            uint64_t *l_1728 = &g_547;
            uint64_t **l_1727 = &l_1728;
            const uint32_t l_1739 = 0UL;
            int32_t *l_1747 = &g_6;
            int32_t **l_1748 = &l_1747;
            union U2 **l_1765 = &g_82;
            const union U1 l_1770 = {0xCBL};
            int i;
            for (i = 0; i < 1; i++)
                l_1711[i] = &g_127[0];
            for (g_984.f4 = 20; (g_984.f4 <= 17); g_984.f4 = safe_sub_func_uint8_t_u_u(g_984.f4, 2))
            { 
                uint16_t *****l_1712 = (void*)0;
                int32_t * const l_1721 = &g_572;
                int32_t **l_1722 = (void*)0;
                int32_t *l_1723 = (void*)0;
                uint64_t *l_1725 = &g_160;
                uint64_t **l_1724 = &l_1725;
                uint64_t ***l_1726[3][1][1];
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1726[i][j][k] = &l_1724;
                    }
                }
                for (g_378.f2.f0 = 21; (g_378.f2.f0 == 2); --g_378.f2.f0)
                { 
                    int16_t l_1715 = (-1L);
                    (*l_1698) ^= (safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((0xE1L != ((safe_mod_func_uint8_t_u_u(l_1709, ((((*l_1694) ^= ((***g_945) , ((l_1710 == (l_1712 = l_1711[0])) >= (safe_mod_func_int64_t_s_s((l_1715 == 1UL), (-1L)))))) && 1L) , l_1715))) < g_1027)), l_14)), 5));
                }
                for (g_676 = 3; (g_676 >= 0); g_676 -= 1)
                { 
                    uint8_t **l_1717 = &l_24;
                    uint8_t ***l_1716 = &l_1717;
                    int32_t ***l_1720 = &g_476;
                    int i, j;
                    (*g_1470) = 0xD6781BCDL;
                    if (l_1696[g_676][(g_676 + 1)])
                        break;
                    (*l_1721) = (0x4FA3L ^ ((((*l_1716) = &g_43[0]) == ((safe_rshift_func_uint16_t_u_u(g_25[g_676][g_676], (l_1720 != &g_476))) , (void*)0)) < (l_1698 == l_1721)));
                }
                l_1723 = l_1698;
                l_1727 = l_1724;
            }
            (*l_1747) &= ((safe_div_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((-9L), (l_1709 || 0x4C5BL))) <= (safe_lshift_func_uint16_t_u_u(((((safe_add_func_int16_t_s_s((l_14 > (safe_rshift_func_int8_t_s_s(l_1739, 3))), (l_23 <= (((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((((safe_add_func_uint16_t_u_u(((&g_197[2] == &g_197[2]) & 0xC4C5L), (*l_1698))) & l_44.f0) , l_1695) >= l_1654), l_1697.f1)), 9L)) | g_47.f4) ^ (**g_88))))) < l_1709) >= g_984.f1) >= l_1697.f5), (*l_1698)))), l_1746)) == l_1695);
            (*l_1748) = &l_1746;
            for (g_378.f1.f0 = 0; (g_378.f1.f0 <= 1); g_378.f1.f0 += 1)
            { 
                uint16_t l_1761[2][5][3] = {{{0x4BE9L,0x4BE9L,0x4BE9L},{0xA497L,0xA497L,0xA497L},{0x4BE9L,0x4BE9L,0x4BE9L},{0xA497L,0xA497L,0xA497L},{0x4BE9L,0x4BE9L,0x4BE9L}},{{0xA497L,0xA497L,0xA497L},{0x4BE9L,0x4BE9L,0x4BE9L},{0xA497L,0xA497L,0xA497L},{0x4BE9L,0x4BE9L,0x4BE9L},{0xA497L,0xA497L,0xA497L}}};
                int32_t *l_1762 = &g_533;
                union U2 **l_1764 = &g_82;
                int i, j, k;
                g_9 |= (+((safe_mul_func_int8_t_s_s((*l_1747), 0xE4L)) & ((safe_sub_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(g_142.f0, g_1100)), ((safe_add_func_uint16_t_u_u(((-4L) == ((safe_mul_func_uint16_t_u_u(l_7[3][1], ((***g_128) = (~g_378.f0)))) ^ (*l_1698))), (**l_1748))) <= l_1761[1][1][2]))) != 0xF632D5D7L)));
                for (g_22 = 0; (g_22 <= 5); g_22 += 1)
                { 
                    int32_t l_1763 = 0x4C8BAFDBL;
                    (*l_1748) = l_1762;
                    (*l_1748) = (*l_1748);
                    (*l_1762) = (((l_1763 , ((((l_1765 = l_1764) == l_1764) || 0x5D123960L) , 0xCDL)) != (safe_mod_func_int8_t_s_s((((l_1768 >= l_1769) | 0x67FDL) && 255UL), 0x21L))) >= l_1763);
                    (*l_1748) = &l_1763;
                }
                return l_1770;
            }
        }
        if (((((&g_1470 == (void*)0) , g_878[1][0]) != l_1771) > (((*l_1774) = l_1773) == l_1775)))
        { 
            return l_44;
        }
        else
        { 
            struct S0 ***l_1784 = &l_1771;
            union U2 l_1801 = {0xBE5851B4L};
            uint32_t *l_1805 = &g_1200[0][0][5];
            uint8_t l_1806 = 255UL;
            int32_t l_1807 = 0x7BF03E18L;
            int64_t l_1808 = 0xA0D42FCBB30B653ELL;
            uint32_t *l_1809 = &g_535;
            int32_t *l_1810 = &l_1746;
            uint32_t l_1811 = 0x2541146DL;
            uint16_t l_1846 = 0xE036L;
            int64_t l_1855 = (-1L);
            const int32_t *l_1870[3][3] = {{&g_2,&g_2,&g_2},{&g_2,&g_9,&g_2},{&g_2,&g_2,&g_2}};
            int64_t l_1874 = 3L;
            uint16_t *** const l_1890 = &g_129;
            union U2 ** const *l_1902 = &g_1181;
            int32_t *l_1903 = &g_676;
            int i, j;
            (*l_1810) = (safe_mod_func_uint32_t_u_u(((*l_1809) ^= ((((((safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((**g_88), 3)) != ((safe_div_func_uint32_t_u_u((((l_1784 != l_1785) <= (((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((~((((*g_1470) = (((safe_add_func_uint64_t_u_u((g_1115 = (safe_sub_func_uint16_t_u_u((l_1697 , (safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((*l_1694) ^= (*l_1698)), ((l_1801 , ((*l_1805) &= (((~(((((safe_div_func_int64_t_s_s(0xE05F14F5D495BDF1LL, 0x150122F3DE89A12DLL)) , g_78[1]) && g_136[2]) <= l_1769) , (*l_1698))) , 1L) <= (*l_1698)))) > (*g_1470)))), g_78[1]))), (*l_1698)))), l_1801.f0)) & g_197[2]) , l_1806)) > l_1696[1][5]) != l_1697.f4)), 1UL)), l_1696[0][0])), l_1654)) < l_1807) > l_1697.f2)) , l_7[3][1]), 0xFEDDF23AL)) != 0x0C925956F9AD01E5LL)), l_1801.f0)) > l_7[3][1]) , 1L) == g_83[0][1][0].f0) , g_1430) , l_1808)), l_1654));
            g_1470 = l_1805;
            if (l_1811)
            { 
                uint64_t l_1831 = 0UL;
                struct S0 l_1863 = {0UL,1L,5L,-6L,0x26A28344L,9L};
                uint16_t **l_1868 = (void*)0;
                int16_t l_1869 = 0xFFBEL;
                int64_t l_1873 = 0L;
                int32_t l_1882 = 0x3A0DA2DAL;
                for (g_932.f0 = (-20); (g_932.f0 > (-1)); g_932.f0++)
                { 
                    uint64_t l_1814 = 9UL;
                    uint64_t *l_1830 = &g_1115;
                    struct S0 * const l_1833[5][6][3] = {{{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984},{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984},{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984}},{{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984},{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984},{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984}},{{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984},{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984},{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984}},{{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984},{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984},{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984}},{{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984},{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984},{&g_984,(void*)0,&g_984},{&g_984,&g_984,&g_984}}};
                    struct S0 **l_1834 = &l_1772;
                    int32_t *l_1835 = (void*)0;
                    int i, j, k;
                    (*g_1470) = (l_1814 , (safe_mod_func_int8_t_s_s(((*l_1698) & ((*l_1698) <= ((*l_24) ^= (~((safe_div_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((g_378.f0 , (safe_mod_func_uint8_t_u_u((~(safe_add_func_uint16_t_u_u(((+l_1814) != ((((safe_add_func_int64_t_s_s(((*l_1698) > (((*l_1830) ^= (((*l_1810) < l_1814) >= (*l_1698))) >= g_984.f4)), g_369)) || l_1831) , (void*)0) == &l_1806)), (**g_129)))), (*l_1810)))), l_1814)), (*l_1810))) >= l_1831))))), l_1832[0])));
                    (*l_1810) = 0xD0FFE2BEL;
                    (*l_1834) = l_1833[1][1][0];
                    l_1835 = &l_14;
                    if ((*l_1835))
                        continue;
                }
                for (g_984.f2 = (-19); (g_984.f2 <= (-4)); g_984.f2 = safe_add_func_uint8_t_u_u(g_984.f2, 7))
                { 
                    uint64_t *l_1849 = &g_316;
                    uint64_t *l_1852 = &g_547;
                    int32_t l_1856 = (-4L);
                    int32_t *l_1877 = &g_9;
                    int32_t *l_1878 = &l_14;
                    int32_t *l_1879 = &l_23;
                    int32_t *l_1880[2][1][6] = {{{&l_1856,&l_1856,&g_2,&l_1856,&l_1856,&g_2}},{{&l_1856,&l_1856,&g_2,&l_1856,&l_1856,&g_2}}};
                    int i, j, k;
                    (*g_1470) |= (0x46DF827BAE973F6ELL <= (((((safe_rshift_func_int16_t_s_u((((*l_1698) = (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((((l_1846 , &l_1769) != (*g_699)) , (((-7L) > (safe_add_func_uint64_t_u_u(((*l_1852) = (--(*l_1849))), 0xDB3EBBEC2C6739D0LL))) & (safe_rshift_func_uint8_t_u_u(0UL, (*l_1698))))) | (**g_88)), 0xFAL)), l_1855)), l_1856))) ^ 8UL), l_1831)) | 0x2878F5B0L) & g_197[2]) | l_1746) || l_23));
                    (*l_1698) ^= (((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((((+((l_1862 >= ((((func_38(((*g_82) , (void*)0), l_7[3][4], func_28(l_1863, ((((*l_1629) = (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((void*)0 == l_1868) > l_1863.f5), 7)), 0L))) < (**g_210)) || l_1869), g_508, &l_1856, l_1697.f3), l_1870[1][2]) , g_25[0][1]) , l_1871) , (void*)0) != (void*)0)) <= l_1863.f0)) <= l_1872[5]) >= g_1430) | (**g_88)), 1)) , l_1863.f5), l_1873)) & l_1856) < (**g_88));
                    if ((*l_1698))
                        continue;
                    (*g_1470) &= ((l_1874 != l_1863.f4) < (--(*l_24)));
                    g_1887[3][3]--;
                }
            }
            else
            { 
                int16_t l_1891 = 0xC010L;
                uint64_t *l_1901 = &g_547;
                (*g_1470) = ((((((l_1890 != l_1890) , l_1891) , (safe_add_func_uint16_t_u_u((l_1894 <= (((*l_1901) &= (safe_add_func_int8_t_s_s(((void*)0 == g_1897[5]), (((safe_sub_func_uint8_t_u_u((g_969.f0 > g_535), l_14)) | (*l_1698)) < (*g_1470))))) ^ l_1872[5])), l_7[3][1]))) < g_47.f2) , &g_1181) != l_1902);
            }
            g_248 = (((*l_1903) = g_584) , l_1810);
            for (g_378.f2.f3 = 0; (g_378.f2.f3 != 22); g_378.f2.f3 = safe_add_func_uint16_t_u_u(g_378.f2.f3, 2))
            { 
                (*l_1810) ^= (*l_1698);
                return l_44;
            }
        }
        (*l_1698) |= (*g_248);
        g_9 = ((*l_1698) = (safe_rshift_func_int16_t_s_s((!(((*l_1698) != (g_6 = ((*g_1470) = l_1768))) != (((*l_1910) ^= (-1L)) && ((safe_sub_func_uint16_t_u_u(((**g_88) = (**g_129)), ((*l_1694) = (((g_1915 , ((((g_1916 = &l_1694) == ((l_1917 ^ l_1697.f3) , &g_1212)) | 0x0B5A209C8EB7E4BBLL) & (*g_248))) & g_236) | (-1L))))) & 0L)))), l_14)));
    }
    else
    { 
        uint16_t l_1918 = 1UL;
        union U2 l_1935[6] = {{0xE999E268L},{0xE999E268L},{0xE999E268L},{0xE999E268L},{0xE999E268L},{0xE999E268L}};
        uint16_t l_1943[4] = {65530UL,65530UL,65530UL,65530UL};
        int32_t ****l_1950 = &l_1925;
        const uint32_t l_1951 = 0UL;
        int32_t l_1959 = 8L;
        int32_t l_1960 = 0x17C2F8E1L;
        int32_t l_1961 = 4L;
        int i;
        for (g_142.f2.f2 = 0; (g_142.f2.f2 >= 0); g_142.f2.f2 -= 1)
        { 
            int32_t *l_1919[4];
            int32_t **l_1920[6][4][3] = {{{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]}},{{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]}},{{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]}},{{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]}},{{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]}},{{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]},{&g_1470,&l_1919[0],&l_1919[0]}}};
            union U2 l_1936 = {-2L};
            const union U1 l_1965 = {0xECL};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_1919[i] = &g_533;
            g_533 = ((*g_1470) = l_1918);
            g_248 = &l_14;
            for (g_932.f2.f4 = 0; (g_932.f2.f4 <= 3); g_932.f2.f4 += 1)
            { 
                int32_t l_1923 = 0xEDCB45A7L;
                int32_t l_1958[3][7][3] = {{{2L,0L,(-1L)},{0x4E37BC13L,0L,0x4E37BC13L},{0xCA3E4DBFL,0xE0E6BF7BL,0x56228F0AL},{0L,0L,0xE0E6BF7BL},{(-9L),2L,0xC7F263FDL},{2L,0x83C22468L,(-8L)},{(-9L),1L,0x4E37BC13L}},{{0L,0xC7F263FDL,3L},{0xCA3E4DBFL,0L,1L},{0x4E37BC13L,1L,1L},{2L,0x57D11039L,3L},{0x298F48E2L,0x45A38463L,0x4E37BC13L},{9L,(-1L),(-8L)},{0xB1B4C6A1L,0L,0xC7F263FDL}},{{(-1L),(-1L),0xE0E6BF7BL},{2L,0x45A38463L,0x56228F0AL},{9L,0x57D11039L,0x4E37BC13L},{0L,1L,(-1L)},{0L,0L,2L},{9L,0xC7F263FDL,(-1L)},{2L,1L,0x81B9A328L}}};
                int i, j, k;
                if ((safe_lshift_func_uint16_t_u_s(l_1923, 0)))
                { 
                    int32_t *****l_1926 = &l_1924;
                    int i;
                    (*l_1926) = l_1924;
                    l_1923 = (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(l_1923, (safe_mul_func_int8_t_s_s(((*l_21) |= ((**l_1630) = (l_1935[3] , ((((((((l_1935[2] , l_1936) , (safe_rshift_func_int16_t_s_s(((safe_div_func_uint64_t_u_u(((safe_div_func_uint32_t_u_u(l_1943[3], (((safe_mul_func_int16_t_s_s((((safe_unary_minus_func_uint32_t_u((((safe_sub_func_uint16_t_u_u(l_1923, (g_1949 != l_1950))) & (**g_210)) | g_1114))) , (**g_210)) && 0x57L), (-1L))) == 0x63611B33L) , (*g_248)))) > 18446744073709551614UL), g_827)) , 0L), 0))) == l_1951) == (*g_1470)) | l_1923) && (*g_248)) >= 7UL) , (**g_210))))), (**g_210))))), 254UL)), (**g_88)));
                    ++g_1954;
                }
                else
                { 
                    int32_t l_1957 = (-10L);
                    if ((*g_248))
                        break;
                    g_1962++;
                    return l_1965;
                }
            }
        }
        g_1470 = &l_23;
        return (**g_946);
    }
    return l_44;
}



static uint8_t  func_15(int16_t  p_16, int8_t * p_17, uint8_t  p_18, int8_t * p_19, int32_t * p_20)
{ 
    int32_t l_1693[4][3][3] = {{{0x878BCD56L,0x441FB235L,0xAFBEF39DL},{0xD2B2AD1FL,0xA8DB13A9L,(-5L)},{0x3180B04DL,(-1L),(-1L)}},{{0xAF7E7B82L,0xD06074E8L,0x441FB235L},{0xAF7E7B82L,0x441FB235L,0xD2B2AD1FL},{0x3180B04DL,0L,0x7CDD208BL}},{{0xD2B2AD1FL,4L,(-1L)},{4L,0L,0x7788F2FEL},{0xA8DB13A9L,0x441FB235L,0xA8DB13A9L}},{{0L,0xD06074E8L,0xA8DB13A9L},{(-5L),(-1L),0x7788F2FEL},{0x7788F2FEL,0xA8DB13A9L,(-1L)}}};
    int i, j, k;
    l_1693[3][1][2] = 0x4DD9623BL;
    return p_16;
}



static struct S0  func_28(struct S0  p_29, int16_t  p_30, const int32_t  p_31, int32_t * p_32, int64_t  p_33)
{ 
    union U1 *l_1655 = (void*)0;
    int64_t *l_1662 = &g_984.f2;
    int64_t **l_1661 = &l_1662;
    int64_t *l_1664 = &g_1126;
    int64_t **l_1663 = &l_1664;
    int32_t l_1665 = 0x463229D5L;
    int8_t *l_1674 = (void*)0;
    int8_t **l_1673 = &l_1674;
    int32_t l_1686 = (-6L);
    uint32_t l_1687 = 0UL;
    int16_t **l_1688 = &g_1212;
    const int16_t *l_1690 = &g_1097;
    const int16_t **l_1689 = &l_1690;
    const int16_t ***l_1691 = &l_1689;
    int32_t **l_1692[2];
    int i;
    for (i = 0; i < 2; i++)
        l_1692[i] = (void*)0;
    (*g_896) = l_1655;
    (*g_1470) = ((p_31 , (((1UL <= p_29.f4) && (safe_lshift_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s((+(0xF632L & ((-10L) && ((((*l_1663) = ((*l_1661) = &p_33)) == (p_29 , &g_1126)) <= 5L)))), g_364)) , l_1665) , 0UL), 4))) , (***g_128))) || l_1665);
    for (g_378.f2.f0 = 0; (g_378.f2.f0 >= 6); g_378.f2.f0 = safe_add_func_int32_t_s_s(g_378.f2.f0, 6))
    { 
        uint8_t **l_1670[2][6];
        uint64_t *l_1677 = &g_547;
        int8_t l_1682 = 0xDAL;
        uint16_t *****l_1683[4][4] = {{&g_127[0],&g_127[0],&g_127[0],&g_127[0]},{&g_127[0],&g_127[0],&g_127[0],&g_127[0]},{&g_127[0],&g_127[0],&g_127[0],&g_127[0]},{&g_127[0],&g_127[0],&g_127[0],&g_127[0]}};
        union U1 * const l_1684 = &g_969;
        int32_t *l_1685 = &g_369;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
                l_1670[i][j] = &g_43[1];
        }
        (*g_1470) |= (safe_sub_func_int8_t_s_s((l_1670[0][4] != ((g_1177 = (safe_add_func_int32_t_s_s(((((void*)0 == l_1673) , (l_1665 < ((l_1686 = (safe_sub_func_int16_t_s_s((((*l_1685) ^= (((*l_1677)--) >= (((safe_sub_func_int64_t_s_s(((l_1682 , l_1683[1][2]) == &g_127[0]), g_1114)) , l_1684) != l_1655))) , p_29.f2), l_1682))) <= 5L))) , 0xA860A5A3L), l_1687))) , &g_43[1])), 1L));
    }
    g_1470 = ((l_1688 == ((*l_1691) = l_1689)) , &g_2);
    return p_29;
}



static struct S0  func_34(int8_t * p_35, uint8_t * p_36, int8_t * p_37)
{ 
    struct S0 *l_1631 = &g_984;
    struct S0 **l_1632 = &l_1631;
    struct S0 *l_1634 = &g_984;
    struct S0 **l_1633 = &l_1634;
    int64_t l_1635 = (-9L);
    int32_t *l_1647 = &g_533;
    struct S0 l_1653 = {3UL,0xAD9B3FBEL,0x1F95F3D934A3B53FLL,-1L,0x8F0129A4L,0L};
    (*l_1633) = ((*g_82) , ((*l_1632) = l_1631));
    (*l_1647) |= ((((*p_36) = l_1635) >= ((!((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((*g_1470), ((safe_sub_func_int16_t_s_s(((*l_1631) , l_1635), (l_1635 & ((safe_div_func_int8_t_s_s((-1L), (safe_mod_func_uint16_t_u_u(((l_1635 & 65535UL) && l_1635), g_851)))) != l_1635)))) | (**g_129)))), l_1635)) & l_1635)) != l_1635)) , l_1635);
    for (g_1098 = (-12); (g_1098 >= 7); g_1098 = safe_add_func_int64_t_s_s(g_1098, 1))
    { 
        return (**l_1633);
    }
    for (g_535 = (-10); (g_535 <= 2); ++g_535)
    { 
        struct S0 l_1652 = {65529UL,0x5232A6CCL,3L,-9L,0xDC81AC36L,0x7F06L};
        return l_1652;
    }
    return l_1653;
}



static union U1  func_38(uint8_t * p_39, uint32_t  p_40, const struct S0  p_41, const int32_t * p_42)
{ 
    uint8_t l_54 = 254UL;
    int8_t *l_60 = &g_22;
    union U2 l_71 = {0x80954C1BL};
    int8_t *l_459 = &g_110;
    int8_t **l_458 = &l_459;
    uint8_t l_923 = 0UL;
    int32_t l_1012[7][4][5] = {{{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L}},{{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L}},{{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L}},{{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L}},{{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L}},{{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L}},{{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L},{1L,1L,0x20D7F43FL,0x20D7F43FL,1L}}};
    union U1 l_1015 = {0xFBL};
    union U1 **l_1190 = &g_931;
    uint32_t l_1203[4] = {0x7F6A71F4L,0x7F6A71F4L,0x7F6A71F4L,0x7F6A71F4L};
    uint16_t *l_1210 = &g_645;
    uint16_t l_1226 = 0xB939L;
    uint32_t *** const l_1238 = &g_699;
    const uint32_t **l_1393 = (void*)0;
    const uint32_t ***l_1392[2];
    struct S0 *l_1406 = &g_984;
    union U2 ***l_1514[4];
    const int16_t l_1517 = 1L;
    int8_t * const * const *l_1525 = &g_210;
    int8_t * const * const **l_1524 = &l_1525;
    int8_t * const * const ** const *l_1523[5] = {&l_1524,&l_1524,&l_1524,&l_1524,&l_1524};
    uint16_t l_1532[7] = {0x63EBL,0x63EBL,0x63EBL,0x63EBL,0x63EBL,0x63EBL,0x63EBL};
    int16_t * const *l_1539 = &g_1212;
    int8_t ***l_1550 = &g_1549;
    int8_t l_1553 = (-6L);
    uint8_t l_1581 = 247UL;
    int16_t l_1616 = (-3L);
    int32_t *l_1627 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1392[i] = &l_1393;
    for (i = 0; i < 4; i++)
        l_1514[i] = &g_1181;
    for (g_6 = 0; (g_6 <= 3); g_6 += 1)
    { 
        union U1 l_48 = {3L};
        return l_48;
    }
    return (**l_1190);
}



static int32_t  func_49(int32_t  p_50, struct S0  p_51, uint16_t  p_52, uint8_t * p_53)
{ 
    int32_t *l_925 = &g_572;
    int32_t **l_924 = &l_925;
    union U1 **l_944 = &g_931;
    union U1 ***l_943[1][2][5] = {{{&l_944,&l_944,&l_944,&l_944,&l_944},{&l_944,&l_944,&l_944,&l_944,&l_944}}};
    union U2 l_960 = {8L};
    int32_t l_976 = 2L;
    int32_t *l_985 = &g_533;
    uint8_t *l_993[3][3] = {{(void*)0,(void*)0,&g_197[2]},{(void*)0,(void*)0,&g_197[2]},{(void*)0,(void*)0,&g_197[2]}};
    int32_t l_994 = 0x419FA579L;
    int32_t l_995 = (-5L);
    int32_t l_996 = 0L;
    int32_t l_997 = 0x58748978L;
    int32_t l_998 = 0xC9D22C04L;
    int32_t l_999 = 0x2271B69FL;
    int32_t l_1000 = 1L;
    int32_t l_1001 = 0L;
    int32_t l_1002[1][3];
    int64_t l_1003[5][1] = {{6L},{0x68DB0C40D93A79E2LL},{6L},{0x68DB0C40D93A79E2LL},{6L}};
    uint16_t l_1004 = 0x0115L;
    union U1 ****l_1007 = &l_943[0][1][4];
    union U1 ***l_1008 = &g_946;
    uint16_t l_1011 = 0xFFA7L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1002[i][j] = 1L;
    }
    (*l_924) = &p_50;
    for (p_51.f2 = 0; (p_51.f2 == (-20)); p_51.f2 = safe_sub_func_uint8_t_u_u(p_51.f2, 3))
    { 
        union U1 *l_929[5] = {&g_378,&g_378,&g_378,&g_378,&g_378};
        int32_t l_939 = 1L;
        int i;
        for (g_645 = 0; (g_645 <= 3); g_645 += 1)
        { 
            union U2 **l_928 = &g_82;
            union U1 **l_930[6] = {&l_929[4],&l_929[4],&l_929[4],&l_929[4],&l_929[4],&l_929[4]};
            int32_t l_935 = 0xD42DF290L;
            int8_t l_942[4] = {(-1L),(-1L),(-1L),(-1L)};
            int i;
            (*l_928) = &g_83[0][1][0];
            g_931 = l_929[4];
            g_945 = ((safe_mod_func_int64_t_s_s((*l_925), (l_935 || (safe_lshift_func_int8_t_s_u(((((~g_236) != (l_939 , (p_52 = (((1UL && ((p_52 | (safe_sub_func_uint32_t_u_u((l_935 >= l_935), p_50))) <= 6UL)) , 0xEE5CD0A28C3ACDA8LL) != l_942[1])))) , 65527UL) == p_51.f5), 3))))) , l_943[0][1][3]);
        }
        return p_51.f2;
    }
    (**l_924) = (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((((((((safe_unary_minus_func_int8_t_s(p_52)) == (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_960 , (**l_924)), (safe_lshift_func_uint8_t_u_s(((((((**g_88) >= p_51.f3) != (p_51.f0 <= (((**l_944) , 65535UL) | 0x6FDBL))) > 0L) || 4294967293UL) != (-5L)), p_51.f4)))), (-1L))), 0))) || (**g_210)) , (**l_924)) || p_51.f5) , (void*)0) == &l_960) , (*l_925)), p_51.f1)), (-10L))), 12));
    if ((!(safe_rshift_func_int8_t_s_u((**l_924), 5))))
    { 
        union U1 *l_968 = &g_969;
        int32_t l_979 = 1L;
        int32_t **l_980[7] = {&l_925,&l_925,&l_925,&l_925,&l_925,&l_925,&l_925};
        int8_t *l_981 = &g_142.f0;
        int i;
        l_968 = ((*l_944) = (**g_945));
        (**l_924) |= (safe_add_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((((4294967292UL == ((l_976 , ((p_51.f0 , 0x27L) & ((*l_981) ^= ((**g_210) &= (safe_add_func_int8_t_s_s((l_979 = p_51.f3), ((p_51.f3 , &g_248) != l_980[2]))))))) <= (**g_88))) || 0xF2BFFEF6L) , 0x35L), 0UL)) && p_51.f2), 1UL));
    }
    else
    { 
        int32_t *l_986 = &g_6;
        for (g_508 = 0; (g_508 <= 3); g_508 += 1)
        { 
            struct S0 *l_983 = &g_984;
            struct S0 **l_982 = &l_983;
            (*l_925) = (((*l_982) = &p_51) != (void*)0);
        }
        (**l_924) = 0xF85F482FL;
        l_986 = l_985;
    }
    (*l_985) = (safe_add_func_uint32_t_u_u(p_51.f4, ((g_984.f5 & ((safe_lshift_func_int16_t_s_u((((((++(**g_129)) != ((--l_1004) == ((((((*l_1007) = &g_946) != (p_51 , (l_1008 = &l_944))) <= (safe_unary_minus_func_int16_t_s(((**l_924) = ((((~(p_51.f1 == (**l_924))) | p_51.f3) <= 0x6263L) | (*l_985)))))) & g_136[2]) > p_51.f2))) | (*l_985)) != g_160) >= l_1011), 10)) >= 1UL)) != p_51.f5)));
    return p_51.f1;
}



static struct S0  func_55(int8_t * p_56, uint8_t  p_57, const uint16_t  p_58, int16_t  p_59)
{ 
    union U1 l_463 = {1L};
    uint32_t l_464 = 0x7C06B639L;
    int32_t *l_475 = &g_9;
    int32_t **l_474 = &l_475;
    int32_t ***l_473[7][3] = {{&l_474,&l_474,&l_474},{&l_474,&l_474,&l_474},{&l_474,&l_474,&l_474},{&l_474,&l_474,&l_474},{&l_474,&l_474,&l_474},{&l_474,&l_474,&l_474},{&l_474,&l_474,&l_474}};
    int32_t l_506 = 0xA81A0D94L;
    uint16_t ** const *l_530 = &g_88;
    uint16_t **l_544[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t l_566 = 1UL;
    uint32_t l_648 = 0UL;
    const int16_t l_694[6][7] = {{(-1L),1L,(-1L),1L,(-1L),1L,(-1L)},{1L,1L,1L,1L,1L,1L,1L},{(-1L),1L,(-1L),1L,(-1L),1L,(-1L)},{1L,1L,1L,1L,1L,1L,1L},{(-1L),1L,(-1L),1L,(-1L),1L,(-1L)},{1L,1L,1L,1L,1L,1L,1L}};
    uint32_t *l_696 = &g_535;
    uint32_t **l_695 = &l_696;
    struct S0 l_716 = {0xA458L,0xF2F156CFL,-1L,7L,18446744073709551607UL,3L};
    int32_t l_732[3][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
    union U2 *l_866[6][4][6] = {{{&g_83[1][0][3],&g_83[0][1][0],&g_83[1][0][3],&g_83[0][0][0],&g_83[0][1][0],&g_83[0][1][0]},{(void*)0,&g_83[1][0][3],&g_83[1][0][3],(void*)0,&g_83[0][1][0],&g_83[0][1][0]},{&g_83[0][1][0],&g_83[0][1][0],&g_83[0][1][0],(void*)0,&g_83[0][1][0],&g_83[2][1][3]},{(void*)0,&g_83[0][1][0],&g_83[2][1][3],&g_83[0][0][0],&g_83[0][1][0],&g_83[0][1][0]}},{{&g_83[1][0][3],&g_83[0][1][0],&g_83[0][1][0],&g_83[0][1][0],&g_83[0][1][0],&g_83[0][1][0]},{&g_83[0][1][1],&g_83[1][0][3],&g_83[2][1][3],&g_83[0][1][0],&g_83[0][1][0],&g_83[2][1][3]},{&g_83[0][1][1],&g_83[0][1][0],&g_83[0][1][0],&g_83[0][1][0],&g_83[0][1][0],&g_83[0][1][0]},{&g_83[1][0][3],&g_83[0][1][0],&g_83[1][0][3],&g_83[0][0][0],&g_83[0][1][0],&g_83[0][1][0]}},{{(void*)0,&g_83[1][0][3],(void*)0,&g_83[1][0][3],(void*)0,&g_83[0][1][2]},{&g_83[2][1][3],&g_83[0][1][0],(void*)0,&g_83[1][0][3],&g_83[0][1][2],&g_83[3][1][0]},{&g_83[1][0][3],&g_83[0][1][2],&g_83[3][1][0],&g_83[0][1][0],&g_83[0][1][2],&g_83[0][1][0]},{&g_83[0][1][0],&g_83[0][1][0],(void*)0,&g_83[2][1][3],(void*)0,&g_83[0][1][0]}},{{&g_83[0][1][0],(void*)0,&g_83[3][1][0],&g_83[0][1][0],(void*)0,&g_83[3][1][0]},{&g_83[0][1][0],(void*)0,(void*)0,&g_83[2][1][3],&g_83[0][1][2],&g_83[0][1][2]},{&g_83[0][1][0],(void*)0,(void*)0,&g_83[0][1][0],(void*)0,(void*)0},{&g_83[1][0][3],(void*)0,(void*)0,&g_83[1][0][3],(void*)0,&g_83[0][1][2]}},{{&g_83[2][1][3],&g_83[0][1][0],(void*)0,&g_83[1][0][3],&g_83[0][1][2],&g_83[3][1][0]},{&g_83[1][0][3],&g_83[0][1][2],&g_83[3][1][0],&g_83[0][1][0],&g_83[0][1][2],&g_83[0][1][0]},{&g_83[0][1][0],&g_83[0][1][0],(void*)0,&g_83[2][1][3],(void*)0,&g_83[0][1][0]},{&g_83[0][1][0],(void*)0,&g_83[3][1][0],&g_83[0][1][0],(void*)0,&g_83[3][1][0]}},{{&g_83[0][1][0],(void*)0,(void*)0,&g_83[2][1][3],&g_83[0][1][2],&g_83[0][1][2]},{&g_83[0][1][0],(void*)0,(void*)0,&g_83[0][1][0],(void*)0,(void*)0},{&g_83[1][0][3],(void*)0,(void*)0,&g_83[1][0][3],(void*)0,&g_83[0][1][2]},{&g_83[2][1][3],&g_83[0][1][0],(void*)0,&g_83[1][0][3],&g_83[0][1][2],&g_83[3][1][0]}}};
    int32_t l_891 = 1L;
    const int8_t l_910 = (-4L);
    struct S0 l_922 = {0x3E7CL,-1L,9L,6L,0x60D635F2L,0xC969L};
    int i, j, k;
    if (((safe_mul_func_uint8_t_u_u(((+(l_463 , (*p_56))) < (((p_59 <= (l_464 && 0x8839L)) >= (safe_mul_func_int16_t_s_s((((p_58 >= ((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(((~(safe_sub_func_uint32_t_u_u(((g_476 = (void*)0) == &g_248), (*l_475)))) == 0x40310098L))), (*l_475))) <= 0x367712A5DED12DA6LL)) != 2L) ^ p_59), (*l_475)))) <= (**g_210))), (**l_474))) && g_47.f3))
    { 
        uint64_t l_481 = 18446744073709551615UL;
        int16_t *l_488 = &g_378.f1.f3;
        int16_t *l_489 = &g_142.f1.f5;
        int32_t *l_536 = &g_6;
        union U1 l_545 = {0x8FL};
        uint16_t **l_546 = &g_89[1];
        int32_t l_549[5][5][3] = {{{(-2L),0xFF2EBC56L,(-1L)},{0L,0L,(-6L)},{(-8L),1L,0x994858D8L},{0L,0xA1F1900AL,0x6950D331L},{(-2L),(-1L),(-1L)}},{{0x26822DD0L,0L,0x6950D331L},{0x994858D8L,0xF5BD42B8L,0x994858D8L},{0x5DB0BA43L,0x6950D331L,(-6L)},{(-2L),0xF5BD42B8L,(-1L)},{0L,0L,0x03434939L}},{{(-8L),(-1L),0x994858D8L},{0L,0xA1F1900AL,0xA1F1900AL},{(-2L),1L,(-1L)},{0x5DB0BA43L,0L,0xA1F1900AL},{0x994858D8L,0xFF2EBC56L,0x994858D8L}},{{0x26822DD0L,0x6950D331L,0x03434939L},{(-2L),0xFF2EBC56L,(-1L)},{0L,0L,(-6L)},{(-8L),1L,0x994858D8L},{0L,0xA1F1900AL,0x6950D331L}},{{(-2L),(-1L),(-1L)},{0x26822DD0L,0L,0x6950D331L},{0x994858D8L,0xF5BD42B8L,0x994858D8L},{0x5DB0BA43L,0x6950D331L,(-6L)},{(-2L),0xF5BD42B8L,(-1L)}}};
        uint16_t l_585[1];
        struct S0 l_635 = {0UL,0xAD188F6DL,0x59497F22002BAB28LL,4L,1UL,0x4D78L};
        int8_t *l_639 = &g_110;
        int8_t l_642 = (-1L);
        int64_t *l_730 = &l_635.f2;
        int32_t l_731 = (-2L);
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_585[i] = 0xE719L;
        (**l_474) = (safe_mul_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(l_481, (g_47 , ((*l_489) = ((*l_488) = (0x2AL == (safe_mod_func_uint64_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((((void*)0 == &g_210) , l_481) | 4UL), p_59)), (*l_475))), (*l_475))))))))) ^ g_197[2]) ^ 255UL), l_481));
    }
    else
    { 
        int8_t * const **l_733 = (void*)0;
        int8_t * const **l_734 = &g_210;
        (*l_734) = &g_211[0];
    }
    for (g_364 = 8; (g_364 != 55); ++g_364)
    { 
        uint64_t l_743 = 0xBAF1ADEAB4948849LL;
        int32_t l_756[2][3];
        const uint32_t l_765 = 0x5C0F382FL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_756[i][j] = 0xE86D434AL;
        }
        for (g_430 = 25; (g_430 < 53); g_430 = safe_add_func_uint32_t_u_u(g_430, 8))
        { 
            for (p_59 = 0; p_59 < 4; p_59 += 1)
            {
                g_43[p_59] = &g_218;
            }
            (**l_474) = (((safe_add_func_uint32_t_u_u(p_59, ((((0xBA74L > ((l_743 <= ((((((l_463 , (((l_463 , (+(safe_div_func_uint64_t_u_u(((!(safe_rshift_func_int16_t_s_u((((g_136[2] < ((safe_div_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((0xFBL || (*p_56)), l_743)) | g_47.f4), p_57)) > p_59)) | 0x80E7L) <= (-7L)), 8))) < 8L), 0x6E28176496743DD5LL)))) , p_57) || 0x2525L)) , 0x629AL) && 0x95DEL) || 0xDFFF1ACFB5A11DEELL) | 65526UL) != 0x1EL)) , l_743)) != l_743) >= (*l_475)) != 0UL))) > (**g_210)) != l_743);
            l_756[0][2] = ((safe_mod_func_uint8_t_u_u(p_57, (-10L))) <= p_59);
        }
        for (l_463.f1.f3 = 21; (l_463.f1.f3 >= 20); l_463.f1.f3 = safe_sub_func_uint32_t_u_u(l_463.f1.f3, 8))
        { 
            uint64_t l_768 = 0x097314E8FC20B11DLL;
            for (g_676 = 0; (g_676 <= 2); g_676 += 1)
            { 
                int32_t l_767 = 0x42AB9023L;
                int i, j;
                for (l_716.f0 = 0; (l_716.f0 <= 5); l_716.f0 += 1)
                { 
                    struct S0 *l_766 = &l_716;
                    (*l_475) = ((safe_add_func_int32_t_s_s(0x643ACC5AL, (((***g_128)--) & 0xE6AFL))) , (safe_lshift_func_uint8_t_u_s(l_765, 5)));
                    l_766 = l_766;
                }
                (**l_474) = p_58;
                l_768--;
            }
        }
    }
    if ((safe_sub_func_uint8_t_u_u(((*l_475) != p_59), (safe_lshift_func_uint8_t_u_u((1UL >= ((g_573 && ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(1UL, 0xFC5461BBL)) & (safe_mod_func_int16_t_s_s(0x2677L, g_197[2]))), 1L)), 10)) ^ p_59)) != p_57)), p_57)))))
    { 
        int8_t *l_792[4][1] = {{(void*)0},{&g_110},{(void*)0},{&g_110}};
        int8_t **l_791[6][7] = {{&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0]},{&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0]},{&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0]},{&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0]},{&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0]},{&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0],&l_792[2][0]}};
        int8_t ***l_790 = &l_791[3][1];
        int8_t ****l_789 = &l_790;
        int32_t l_797 = 0xBFD112B2L;
        int i, j;
        for (g_378.f1.f0 = 0; (g_378.f1.f0 <= 19); ++g_378.f1.f0)
        { 
            int32_t *l_785 = (void*)0;
            int8_t ***l_787 = (void*)0;
            int8_t ****l_786 = &l_787;
            for (g_675 = 2; (g_675 >= 0); g_675 -= 1)
            { 
                int8_t *****l_788[7] = {&l_786,&l_786,&l_786,&l_786,&l_786,&l_786,&l_786};
                int64_t *l_805[1];
                union U1 *l_807[7];
                union U1 **l_806 = &l_807[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_805[i] = &l_463.f2.f2;
                for (i = 0; i < 7; i++)
                    l_807[i] = &l_463;
                l_732[g_675][(g_675 + 1)] = 0xCB74D84FL;
                l_785 = &l_732[g_675][g_675];
                l_789 = l_786;
                (*l_785) = (safe_div_func_int64_t_s_s(((**l_474) > (l_797 == ((&g_142 != ((*l_806) = (((g_142.f1.f2 = (safe_add_func_uint8_t_u_u((+0x1EA7360FC2C0A026LL), ((((safe_rshift_func_uint16_t_u_u((18446744073709551615UL && ((void*)0 != g_43[g_675])), l_732[g_675][g_675])) || (*l_785)) , l_788[3]) == (void*)0)))) <= g_2) , (void*)0))) <= l_732[g_675][(g_675 + 1)]))), (**l_474)));
            }
            (*l_474) = l_785;
            return l_716;
        }
    }
    else
    { 
        struct S0 *l_809 = &l_716;
        struct S0 **l_808 = &l_809;
        int8_t l_842[5];
        int32_t l_846 = 0xA4D1374FL;
        int32_t l_847 = (-2L);
        const union U2 *l_867 = &g_83[3][0][1];
        const uint64_t *l_873 = &g_547;
        const uint8_t * const l_912 = &g_218;
        const uint8_t * const *l_911 = &l_912;
        int i;
        for (i = 0; i < 5; i++)
            l_842[i] = 0x69L;
        (*l_808) = (void*)0;
        for (g_142.f1.f2 = 0; (g_142.f1.f2 >= 0); g_142.f1.f2 -= 1)
        { 
            return g_47;
        }
        for (l_463.f1.f4 = 0; (l_463.f1.f4 <= 48); l_463.f1.f4 = safe_add_func_uint32_t_u_u(l_463.f1.f4, 1))
        { 
            uint32_t l_831[7][7][5] = {{{7UL,0x05055C12L,0UL,0xA5559F9FL,18446744073709551615UL},{7UL,0x75C0710EL,1UL,0UL,0x474AFAD1L},{18446744073709551609UL,0x30E4B8A9L,0UL,0x3E334F90L,18446744073709551615UL},{0xB4C5C54FL,0xA794D9D1L,18446744073709551607UL,18446744073709551611UL,0x2C608539L},{18446744073709551607UL,0xC0ADD0B2L,0UL,0xD6D9232FL,18446744073709551615UL},{0x30187EFAL,0xA5559F9FL,1UL,1UL,0x05055C12L},{0xC0ADD0B2L,7UL,0xA5559F9FL,0x05055C12L,7UL}},{{18446744073709551613UL,0xB36D0991L,0xEE11DFCFL,18446744073709551607UL,0x1DABBB74L},{18446744073709551613UL,18446744073709551615UL,6UL,0xC9CB0166L,3UL},{0xC0ADD0B2L,0x1779716FL,0x89004754L,0xC059AFB5L,0UL},{0x30187EFAL,18446744073709551609UL,0xCF936062L,0x1AD2FBE0L,0xCAA57890L},{18446744073709551607UL,0UL,7UL,0x004CDDF9L,0xFAC72CC4L},{0xB4C5C54FL,0xC9CB0166L,0x30E4B8A9L,0x20C9B9D0L,0x20C9B9D0L},{18446744073709551609UL,0x2C608539L,18446744073709551609UL,1UL,0x142A7B52L}},{{7UL,0x3E334F90L,1UL,0x75C0710EL,18446744073709551613UL},{7UL,0xD7280CDFL,0x33607432L,0x821C9AEBL,1UL},{9UL,0xCF936062L,1UL,18446744073709551613UL,0x02615680L},{0xEE11DFCFL,0x3D2951DFL,18446744073709551609UL,0x30E4B8A9L,0UL},{0UL,0x474AFAD1L,0x30E4B8A9L,9UL,1UL},{0x687A537FL,0x02615680L,7UL,18446744073709551615UL,0x189C2B10L},{0xE55765C6L,0x33607432L,0xCF936062L,0x1779716FL,0x004CDDF9L}},{{0UL,0xCAA57890L,0x89004754L,0UL,1UL},{0xD6D9232FL,1UL,6UL,0xD7280CDFL,0xB36D0991L},{0xD7280CDFL,0xC059AFB5L,0xEE11DFCFL,0UL,0xB36D0991L},{0x30E4B8A9L,18446744073709551615UL,0xA5559F9FL,0xB4C5C54FL,1UL},{0x1AD2FBE0L,0xB4C5C54FL,1UL,0x2C608539L,0x004CDDF9L},{0x33607432L,1UL,0UL,4UL,0x189C2B10L},{1UL,18446744073709551613UL,18446744073709551607UL,2UL,1UL}},{{0x1D27D665L,9UL,0UL,1UL,0UL},{0x7967E5B2L,0x7967E5B2L,1UL,18446744073709551614UL,0x02615680L},{18446744073709551615UL,1UL,0UL,0x1845445EL,1UL},{1UL,1UL,4UL,0UL,0xE55765C6L},{4UL,0x89004754L,0x05055C12L,18446744073709551615UL,5UL},{5UL,1UL,18446744073709551615UL,6UL,0x3E334F90L},{0UL,2UL,0x1AD2FBE0L,1UL,18446744073709551614UL}},{{18446744073709551611UL,0xE55765C6L,0xC9CB0166L,0xA794D9D1L,0xD7280CDFL},{0xB4C5C54FL,0xB36D0991L,2UL,0xCF936062L,0xC9CB0166L},{1UL,0x142A7B52L,0xDE5814CDL,1UL,0xA794D9D1L},{3UL,0UL,18446744073709551613UL,4UL,18446744073709551615UL},{7UL,0x821C9AEBL,1UL,4UL,0x1845445EL},{1UL,1UL,1UL,1UL,0x474AFAD1L},{0UL,0xD7280CDFL,0UL,0xCF936062L,0UL}},{{0xD7280CDFL,0UL,7UL,0xA794D9D1L,0x1AD2FBE0L},{0x1779716FL,1UL,0x142A7B52L,1UL,18446744073709551609UL},{0UL,9UL,6UL,6UL,9UL},{18446744073709551615UL,0xB4C5C54FL,18446744073709551610UL,18446744073709551615UL,0UL},{18446744073709551614UL,0x02615680L,0UL,0x3D2951DFL,4UL},{0xA794D9D1L,18446744073709551615UL,2UL,0x20C9B9D0L,0xD6D9232FL},{18446744073709551614UL,0xDE5814CDL,0xB36D0991L,7UL,0xC00DCD10L}}};
            uint32_t l_843[5];
            int32_t l_850[2][4] = {{(-1L),7L,(-1L),(-1L)},{7L,7L,(-5L),7L}};
            uint32_t l_868 = 1UL;
            int16_t *l_888 = &g_378.f2.f3;
            int64_t *l_889 = &g_142.f2.f2;
            int16_t *l_890[5][6][7] = {{{&l_716.f5,&l_716.f3,&g_236,&l_716.f5,(void*)0,(void*)0,&l_716.f5},{(void*)0,&g_236,(void*)0,&l_716.f5,&g_236,&l_716.f5,(void*)0},{(void*)0,&l_716.f5,&g_236,&g_236,&l_716.f5,&g_236,&g_236},{&g_236,&g_236,&l_716.f3,&l_716.f5,&l_716.f3,&l_716.f5,&g_236},{&g_236,(void*)0,(void*)0,&l_716.f3,&l_716.f3,(void*)0,(void*)0},{&l_716.f5,&g_236,&g_236,&l_716.f3,&l_716.f3,&l_716.f5,&l_716.f5}},{{(void*)0,(void*)0,&l_716.f5,(void*)0,&l_716.f5,(void*)0,(void*)0},{&l_716.f5,&l_716.f5,&l_716.f3,&l_716.f3,&g_236,&g_236,&l_716.f5},{(void*)0,(void*)0,&l_716.f3,&l_716.f3,(void*)0,(void*)0,&g_236},{&g_236,&l_716.f5,&l_716.f3,&l_716.f5,&l_716.f3,&g_236,&g_236},{&g_236,&g_236,&l_716.f5,&g_236,&g_236,&l_716.f5,(void*)0},{(void*)0,&l_716.f5,&g_236,&l_716.f5,(void*)0,&g_236,(void*)0}},{{&l_716.f5,(void*)0,(void*)0,&l_716.f5,&g_236,&l_716.f3,&l_716.f5},{(void*)0,&l_716.f5,&l_716.f3,&g_236,&l_716.f5,&l_716.f3,&g_236},{&l_716.f3,&g_236,&l_716.f3,&l_716.f5,&g_236,(void*)0,&g_236},{&l_716.f5,&l_716.f3,&g_236,&g_236,(void*)0,&g_236,&g_236},{&g_236,&g_236,(void*)0,&l_716.f3,&l_716.f5,(void*)0,&g_236},{&g_236,&l_716.f5,&g_236,&l_716.f3,&l_716.f5,&g_236,&l_716.f3}},{{&l_716.f5,&l_716.f5,&g_236,&l_716.f3,&l_716.f5,&l_716.f5,&l_716.f3},{&g_236,&l_716.f5,(void*)0,&l_716.f5,(void*)0,&l_716.f5,&g_236},{&l_716.f3,&l_716.f5,&l_716.f5,&l_716.f3,&g_236,&l_716.f5,&l_716.f5},{&l_716.f3,&g_236,&l_716.f5,&l_716.f3,&g_236,&l_716.f5,&g_236},{&g_236,(void*)0,&l_716.f5,&l_716.f3,(void*)0,&g_236,&g_236},{&g_236,&g_236,(void*)0,&g_236,&g_236,&l_716.f3,&l_716.f5}},{{&g_236,(void*)0,&g_236,&l_716.f5,&l_716.f3,&g_236,&l_716.f3},{&g_236,&g_236,&g_236,&g_236,&g_236,&g_236,(void*)0},{&g_236,&l_716.f5,(void*)0,(void*)0,&l_716.f5,&l_716.f5,(void*)0},{&g_236,&l_716.f5,&g_236,&g_236,&l_716.f3,&l_716.f3,(void*)0},{&g_236,&l_716.f5,&l_716.f3,(void*)0,&l_716.f5,(void*)0,&l_716.f3},{&l_716.f3,&l_716.f5,&g_236,&l_716.f5,(void*)0,&l_716.f3,&l_716.f5}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_843[i] = 0x57CC08D1L;
            for (g_142.f1.f4 = 0; (g_142.f1.f4 <= 1); g_142.f1.f4 += 1)
            { 
                uint8_t *l_836 = &g_197[1];
                int32_t l_839 = (-1L);
                struct S0 l_869 = {65532UL,0x085F8F7DL,0L,1L,1UL,-1L};
                int i;
                (*l_475) = ((!(safe_sub_func_uint64_t_u_u((+((void*)0 != &g_89[g_142.f1.f4])), 0xF5EF0C82AFD1776ALL))) && (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((l_831[4][1][1] = (safe_div_func_uint64_t_u_u((safe_add_func_int16_t_s_s((~((safe_lshift_func_uint16_t_u_s((255UL && ((*g_82) , g_827)), (safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(0x8DA2L)), p_58)))) & (**g_129))), p_58)), (-4L)))), p_58)), 255UL)));
                (*l_475) |= (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((*l_836) = p_57), (((**g_210) |= (safe_rshift_func_int8_t_s_s((*p_56), (l_839 > (safe_add_func_int32_t_s_s((p_59 || ((void*)0 == &g_236)), 1UL)))))) || 0x14L))), (-1L)));
                for (g_369 = 1; (g_369 >= 0); g_369 -= 1)
                { 
                    int32_t l_848 = 0x4392EAEBL;
                    int32_t l_849 = 0x13DAED44L;
                    int64_t *l_863 = &g_675;
                    int i;
                    (*l_475) = g_136[(g_369 + 1)];
                    ++l_843[3];
                    (*l_474) = (*l_474);
                    g_851++;
                    (**l_474) ^= (safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s(6L, ((+((l_848 != ((l_850[0][1] = (l_839 ^ ((l_849 <= (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s(((*l_863) = l_831[4][1][1]))), (&g_378 == (l_848 , &g_142))))))) == (-3L)))) | p_57)) <= p_58)) , g_136[(g_369 + 1)]))), l_847));
                }
                (**l_474) &= 0x01A959CDL;
                for (l_506 = 0; (l_506 <= 2); l_506 += 1)
                { 
                    int i, j, k;
                    if (g_78[(l_506 + 2)])
                        break;
                    if (g_316)
                        continue;
                    (**l_474) = (((((((safe_rshift_func_uint8_t_u_s((l_866[0][0][4] == l_867), (((l_868 , p_58) , l_716) , (((**l_474) > l_843[3]) ^ g_78[(l_506 + 2)])))) , p_59) | p_58) >= g_78[(l_506 + 2)]) < g_78[(l_506 + 2)]) | g_78[(l_506 + 2)]) < p_58);
                    return l_869;
                }
            }
            (*l_475) = (safe_mul_func_int16_t_s_s((~(l_873 != &l_566)), (safe_sub_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((g_236 = (g_878[1][0] == ((((*l_889) = (safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(((~((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0xD9F9ACCFL, l_846)), ((*g_82) , (((*l_888) = (-2L)) >= 0xC508L)))) < (**l_474))) || 1L), p_58)), 0xF4266C06A2D68152LL))) | g_110) , (void*)0))), l_891)) > 0x42C78C8DL) < p_59), l_847))));
        }
        for (g_378.f0 = 6; (g_378.f0 >= (-25)); g_378.f0 = safe_sub_func_int32_t_s_s(g_378.f0, 7))
        { 
            const union U1 *l_895 = &l_463;
            const union U1 ** const l_894[5] = {&l_895,&l_895,&l_895,&l_895,&l_895};
            int16_t l_916[5];
            struct S0 l_917 = {0x6521L,2L,-1L,0xD093L,1UL,0x6FE3L};
            int32_t l_918[5];
            uint16_t l_919[2][2][5] = {{{6UL,0xABD1L,65532UL,0xABD1L,6UL},{65533UL,0xD64EL,65526UL,0xD64EL,65533UL}},{{6UL,0xABD1L,65532UL,0xABD1L,6UL},{65533UL,0xD64EL,65526UL,0xD64EL,65533UL}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_916[i] = 0xE27FL;
            for (i = 0; i < 5; i++)
                l_918[i] = 0x3E835202L;
            (**l_474) = p_59;
            g_896 = l_894[2];
            if (p_58)
            { 
                int16_t l_915 = (-8L);
                l_847 &= (*l_475);
                l_916[4] = (safe_sub_func_int64_t_s_s(l_846, (safe_mul_func_uint16_t_u_u(((((l_846 , (((**g_88)++) > (safe_add_func_uint64_t_u_u(((((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(0x7FL, l_910)) != ((void*)0 != l_911)), ((**g_210) = ((safe_mul_func_int8_t_s_s((g_676 , (*p_56)), (*p_56))) <= l_842[4])))) > l_847) == 0x4FL) || (*p_56)), 0x0E3C998F496413BDLL)))) < 0UL) || l_915) > p_58), 0xAACAL))));
            }
            else
            { 
                return l_917;
            }
            --l_919[1][0][4];
        }
    }
    return l_922;
}



static int8_t * func_65(union U2  p_66, int8_t * p_67, int32_t  p_68, int8_t * const  p_69, int8_t  p_70)
{ 
    const int16_t l_72 = 0xFD8DL;
    int8_t *l_87 = &g_22;
    int32_t l_116 = 0x0A7C5611L;
    uint32_t l_118[4];
    union U1 l_157 = {0xA7L};
    uint8_t l_219 = 0x6FL;
    uint16_t **l_229 = (void*)0;
    struct S0 l_249[7][7][5] = {{{{4UL,1L,-4L,0L,18446744073709551615UL,-10L},{65535UL,-1L,0x53FDCE9B7E83AC69LL,1L,18446744073709551613UL,0L},{0x4773L,0xF460C0EEL,0xFFEA52ED1EEAA21FLL,0x4D60L,18446744073709551615UL,0xADB0L},{65535UL,-1L,0x53FDCE9B7E83AC69LL,1L,18446744073709551613UL,0L},{4UL,1L,-4L,0L,18446744073709551615UL,-10L}},{{0UL,0x52A225A8L,0L,1L,0x3D015D56L,0xF066L},{0x0AB5L,0x5CB5E7A7L,0L,0x479EL,0x39A9A80CL,-6L},{0x640DL,0xD85689E5L,0xA994BE0A22320633LL,0xA239L,18446744073709551615UL,6L},{9UL,0x7F7CBA25L,0xAA24B6D029A79306LL,0x653FL,0x5769E90DL,0L},{0xE223L,1L,0xFE41C3956D99E69ELL,0xC6DAL,0x01B76340L,0xDB00L}},{{0xC73EL,0xC29183A3L,0x179A345722FB22D0LL,0L,18446744073709551615UL,-1L},{65527UL,0L,0x36D5A7869C72776ELL,0L,0UL,8L},{0x67A8L,5L,0xB8838B9C543437DALL,0x9027L,7UL,-1L},{65530UL,-2L,0xFFD04AB980BE7D7ALL,0xCF37L,1UL,0x9AFFL},{0UL,0x274EEE24L,0xA2072C5E54166E7CLL,-6L,18446744073709551615UL,-1L}},{{1UL,0x29F4EE44L,0x2D263616B983BC1DLL,0xA0BEL,0xEC4D18DCL,0x58FAL},{0x640DL,0xD85689E5L,0xA994BE0A22320633LL,0xA239L,18446744073709551615UL,6L},{0xE223L,1L,0xFE41C3956D99E69ELL,0xC6DAL,0x01B76340L,0xDB00L},{0x0AB5L,0x5CB5E7A7L,0L,0x479EL,0x39A9A80CL,-6L},{0xE223L,1L,0xFE41C3956D99E69ELL,0xC6DAL,0x01B76340L,0xDB00L}},{{65530UL,-2L,0xFFD04AB980BE7D7ALL,0xCF37L,1UL,0x9AFFL},{65530UL,-2L,0xFFD04AB980BE7D7ALL,0xCF37L,1UL,0x9AFFL},{0xEE5EL,0x461F6864L,8L,0L,0UL,2L},{0x67A8L,5L,0xB8838B9C543437DALL,0x9027L,7UL,-1L},{4UL,1L,-4L,0L,18446744073709551615UL,-10L}},{{0xE223L,1L,0xFE41C3956D99E69ELL,0xC6DAL,0x01B76340L,0xDB00L},{4UL,0L,1L,0xAFCCL,1UL,-1L},{0x687EL,7L,0x0E12FE7324F2782ALL,0x1A93L,0UL,0xAD95L},{0UL,0x9951ACACL,0xFD8889A77E123A8CLL,-7L,0x0A60CB00L,9L},{0UL,0x1743C508L,1L,-9L,0xD3968E83L,0x01E6L}},{{0x4773L,0xF460C0EEL,0xFFEA52ED1EEAA21FLL,0x4D60L,18446744073709551615UL,0xADB0L},{0UL,0x0686C5DAL,0x8414168538732B21LL,-7L,18446744073709551606UL,-1L},{0UL,0x274EEE24L,0xA2072C5E54166E7CLL,-6L,18446744073709551615UL,-1L},{0UL,-1L,0x839176EC824061E3LL,0x4F03L,18446744073709551609UL,0xB6E5L},{65535UL,-1L,0x53FDCE9B7E83AC69LL,1L,18446744073709551613UL,0L}}},{{{0xAFFDL,-1L,0xB228D5863DB9BC0FLL,0x96ABL,6UL,0x193FL},{4UL,0L,1L,0xAFCCL,1UL,-1L},{4UL,0L,1L,0xAFCCL,1UL,-1L},{0xAFFDL,-1L,0xB228D5863DB9BC0FLL,0x96ABL,6UL,0x193FL},{0x5939L,-10L,1L,-9L,18446744073709551611UL,0x08D2L}},{{65527UL,0L,0x36D5A7869C72776ELL,0L,0UL,8L},{65530UL,-2L,0xFFD04AB980BE7D7ALL,0xCF37L,1UL,0x9AFFL},{1UL,0xC468D78FL,0x39E3F63190A6632FLL,-1L,1UL,0L},{4UL,1L,-4L,0L,18446744073709551615UL,-10L},{0x61F0L,-1L,0xCDC94ECEE0DB94E0LL,1L,0x0D59A368L,-1L}},{{0x687EL,7L,0x0E12FE7324F2782ALL,0x1A93L,0UL,0xAD95L},{0x640DL,0xD85689E5L,0xA994BE0A22320633LL,0xA239L,18446744073709551615UL,6L},{0UL,1L,0x4A20C8D91BA7469FLL,-1L,0x77B0BA2CL,0x05C3L},{1UL,0x29F4EE44L,0x2D263616B983BC1DLL,0xA0BEL,0xEC4D18DCL,0x58FAL},{4UL,0L,1L,0xAFCCL,1UL,-1L}},{{0UL,0x0686C5DAL,0x8414168538732B21LL,-7L,18446744073709551606UL,-1L},{65527UL,0L,0x36D5A7869C72776ELL,0L,0UL,8L},{4UL,1L,-4L,0L,18446744073709551615UL,-10L},{0UL,0xB07F2A8BL,-1L,0xC44DL,1UL,0x063BL},{1UL,0xC468D78FL,0x39E3F63190A6632FLL,-1L,1UL,0L}},{{65529UL,9L,0x8E9B7926347CD1DCLL,0L,0x39C7567BL,0xE9F5L},{0xAFFDL,-1L,0xB228D5863DB9BC0FLL,0x96ABL,6UL,0x193FL},{0xDF80L,9L,0xC2A12C240C774795LL,-4L,18446744073709551615UL,0xBB47L},{0UL,0x1743C508L,1L,-9L,0xD3968E83L,0x01E6L},{4UL,0L,1L,0xAFCCL,1UL,-1L}},{{0x7AD4L,1L,0x62709E712BC023DDLL,1L,0x545C5AFCL,0xADC9L},{65530UL,-2L,0xFFD04AB980BE7D7ALL,0xCF37L,1UL,0x9AFFL},{0x4773L,0xF460C0EEL,0xFFEA52ED1EEAA21FLL,0x4D60L,18446744073709551615UL,0xADB0L},{0UL,0x0686C5DAL,0x8414168538732B21LL,-7L,18446744073709551606UL,-1L},{0UL,0x274EEE24L,0xA2072C5E54166E7CLL,-6L,18446744073709551615UL,-1L}},{{0xAFFDL,-1L,0xB228D5863DB9BC0FLL,0x96ABL,6UL,0x193FL},{0x9D8EL,0x22D61618L,0xE2AD8F1DAB9524A2LL,-1L,0UL,0L},{0UL,0x52A225A8L,0L,1L,0x3D015D56L,0xF066L},{0x687EL,7L,0x0E12FE7324F2782ALL,0x1A93L,0UL,0xAD95L},{0x687EL,7L,0x0E12FE7324F2782ALL,0x1A93L,0UL,0xAD95L}}},{{{0x7AD4L,1L,0x62709E712BC023DDLL,1L,0x545C5AFCL,0xADC9L},{0UL,-1L,0x839176EC824061E3LL,0x4F03L,18446744073709551609UL,0xB6E5L},{0x7AD4L,1L,0x62709E712BC023DDLL,1L,0x545C5AFCL,0xADC9L},{65527UL,0L,0x36D5A7869C72776ELL,0L,0UL,8L},{0xEE5EL,0x461F6864L,8L,0L,0UL,2L}},{{65529UL,9L,0x8E9B7926347CD1DCLL,0L,0x39C7567BL,0xE9F5L},{0xDF80L,9L,0xC2A12C240C774795LL,-4L,18446744073709551615UL,0xBB47L},{0x0AB5L,0x5CB5E7A7L,0L,0x479EL,0x39A9A80CL,-6L},{0xAFFDL,-1L,0xB228D5863DB9BC0FLL,0x96ABL,6UL,0x193FL},{0xE223L,1L,0xFE41C3956D99E69ELL,0xC6DAL,0x01B76340L,0xDB00L}},{{65535UL,-1L,0x53FDCE9B7E83AC69LL,1L,18446744073709551613UL,0L},{0UL,0x0686C5DAL,0x8414168538732B21LL,-7L,18446744073709551606UL,-1L},{4UL,1L,-4L,0L,18446744073709551615UL,-10L},{0x4773L,0xF460C0EEL,0xFFEA52ED1EEAA21FLL,0x4D60L,18446744073709551615UL,0xADB0L},{0x67A8L,5L,0xB8838B9C543437DALL,0x9027L,7UL,-1L}},{{0x640DL,0xD85689E5L,0xA994BE0A22320633LL,0xA239L,18446744073709551615UL,6L},{0xE223L,1L,0xFE41C3956D99E69ELL,0xC6DAL,0x01B76340L,0xDB00L},{0x0AB5L,0x5CB5E7A7L,0L,0x479EL,0x39A9A80CL,-6L},{0xE223L,1L,0xFE41C3956D99E69ELL,0xC6DAL,0x01B76340L,0xDB00L},{0x640DL,0xD85689E5L,0xA994BE0A22320633LL,0xA239L,18446744073709551615UL,6L}},{{1UL,0xC468D78FL,0x39E3F63190A6632FLL,-1L,1UL,0L},{0xC73EL,0xC29183A3L,0x179A345722FB22D0LL,0L,18446744073709551615UL,-1L},{0x7AD4L,1L,0x62709E712BC023DDLL,1L,0x545C5AFCL,0xADC9L},{65530UL,-2L,0xFFD04AB980BE7D7ALL,0xCF37L,1UL,0x9AFFL},{0x4773L,0xF460C0EEL,0xFFEA52ED1EEAA21FLL,0x4D60L,18446744073709551615UL,0xADB0L}},{{0UL,0x1743C508L,1L,-9L,0xD3968E83L,0x01E6L},{4UL,0L,1L,0xAFCCL,1UL,-1L},{0UL,0x52A225A8L,0L,1L,0x3D015D56L,0xF066L},{1UL,0x29F4EE44L,0x2D263616B983BC1DLL,0xA0BEL,0xEC4D18DCL,0x58FAL},{0UL,0x9951ACACL,0xFD8889A77E123A8CLL,-7L,0x0A60CB00L,9L}},{{0xF4E9L,1L,-6L,0x476EL,18446744073709551608UL,0xF9CCL},{0x7AD4L,1L,0x62709E712BC023DDLL,1L,0x545C5AFCL,0xADC9L},{0x4773L,0xF460C0EEL,0xFFEA52ED1EEAA21FLL,0x4D60L,18446744073709551615UL,0xADB0L},{0xC73EL,0xC29183A3L,0x179A345722FB22D0LL,0L,18446744073709551615UL,-1L},{0x4773L,0xF460C0EEL,0xFFEA52ED1EEAA21FLL,0x4D60L,18446744073709551615UL,0xADB0L}}},{{{1UL,0x29F4EE44L,0x2D263616B983BC1DLL,0xA0BEL,0xEC4D18DCL,0x58FAL},{1UL,0x29F4EE44L,0x2D263616B983BC1DLL,0xA0BEL,0xEC4D18DCL,0x58FAL},{0xDF80L,9L,0xC2A12C240C774795LL,-4L,18446744073709551615UL,0xBB47L},{0UL,0x52A225A8L,0L,1L,0x3D015D56L,0xF066L},{0x640DL,0xD85689E5L,0xA994BE0A22320633LL,0xA239L,18446744073709551615UL,6L}},{{0x4773L,0xF460C0EEL,0xFFEA52ED1EEAA21FLL,0x4D60L,18446744073709551615UL,0xADB0L},{0UL,0x274EEE24L,0xA2072C5E54166E7CLL,-6L,18446744073709551615UL,-1L},{0UL,0xB07F2A8BL,-1L,0xC44DL,1UL,0x063BL},{4UL,1L,-4L,0L,18446744073709551615UL,-10L},{0x67A8L,5L,0xB8838B9C543437DALL,0x9027L,7UL,-1L}},{{0x0AB5L,0x5CB5E7A7L,0L,0x479EL,0x39A9A80CL,-6L},{9UL,0x7F7CBA25L,0xAA24B6D029A79306LL,0x653FL,0x5769E90DL,0L},{0UL,0x9951ACACL,0xFD8889A77E123A8CLL,-7L,0x0A60CB00L,9L},{0x9D8EL,0x22D61618L,0xE2AD8F1DAB9524A2LL,-1L,0UL,0L},{0xE223L,1L,0xFE41C3956D99E69ELL,0xC6DAL,0x01B76340L,0xDB00L}},{{0x0D7AL,-1L,9L,0x7973L,18446744073709551613UL,0L},{0UL,0x274EEE24L,0xA2072C5E54166E7CLL,-6L,18446744073709551615UL,-1L},{0UL,0x274EEE24L,0xA2072C5E54166E7CLL,-6L,18446744073709551615UL,-1L},{0x0D7AL,-1L,9L,0x7973L,18446744073709551613UL,0L},{0xEE5EL,0x461F6864L,8L,0L,0UL,2L}},{{4UL,0L,1L,0xAFCCL,1UL,-1L},{1UL,0x29F4EE44L,0x2D263616B983BC1DLL,0xA0BEL,0xEC4D18DCL,0x58FAL},{0UL,1L,0x4A20C8D91BA7469FLL,-1L,0x77B0BA2CL,0x05C3L},{0x640DL,0xD85689E5L,0xA994BE0A22320633LL,0xA239L,18446744073709551615UL,6L},{0x687EL,7L,0x0E12FE7324F2782ALL,0x1A93L,0UL,0xAD95L}},{{0UL,0xB07F2A8BL,-1L,0xC44DL,1UL,0x063BL},{0x7AD4L,1L,0x62709E712BC023DDLL,1L,0x545C5AFCL,0xADC9L},{0x61F0L,-1L,0xCDC94ECEE0DB94E0LL,1L,0x0D59A368L,-1L},{0xF4E9L,1L,-6L,0x476EL,18446744073709551608UL,0xF9CCL},{0UL,0x274EEE24L,0xA2072C5E54166E7CLL,-6L,18446744073709551615UL,-1L}},{{9UL,0x7F7CBA25L,0xAA24B6D029A79306LL,0x653FL,0x5769E90DL,0L},{4UL,0L,1L,0xAFCCL,1UL,-1L},{0x640DL,0xD85689E5L,0xA994BE0A22320633LL,0xA239L,18446744073709551615UL,6L},{0x640DL,0xD85689E5L,0xA994BE0A22320633LL,0xA239L,18446744073709551615UL,6L},{4UL,0L,1L,0xAFCCL,1UL,-1L}}},{{{0x67A8L,5L,0xB8838B9C543437DALL,0x9027L,7UL,-1L},{0xC73EL,0xC29183A3L,0x179A345722FB22D0LL,0L,18446744073709551615UL,-1L},{0UL,-1L,0x839176EC824061E3LL,0x4F03L,18446744073709551609UL,0xB6E5L},{0x0D7AL,-1L,9L,0x7973L,18446744073709551613UL,0L},{1UL,0xC468D78FL,0x39E3F63190A6632FLL,-1L,1UL,0L}},{{0x5939L,-10L,1L,-9L,18446744073709551611UL,0x08D2L},{0xE223L,1L,0xFE41C3956D99E69ELL,0xC6DAL,0x01B76340L,0xDB00L},{1UL,0x29F4EE44L,0x2D263616B983BC1DLL,0xA0BEL,0xEC4D18DCL,0x58FAL},{0x9D8EL,0x22D61618L,0xE2AD8F1DAB9524A2LL,-1L,0UL,0L},{0UL,1L,0x4A20C8D91BA7469FLL,-1L,0x77B0BA2CL,0x05C3L}},{{0xC73EL,0xC29183A3L,0x179A345722FB22D0LL,0L,18446744073709551615UL,-1L},{0UL,0x0686C5DAL,0x8414168538732B21LL,-7L,18446744073709551606UL,-1L},{65527UL,0L,0x36D5A7869C72776ELL,0L,0UL,8L},{4UL,1L,-4L,0L,18446744073709551615UL,-10L},{4UL,1L,-4L,0L,18446744073709551615UL,-10L}},{{0x5939L,-10L,1L,-9L,18446744073709551611UL,0x08D2L},{0xDF80L,9L,0xC2A12C240C774795LL,-4L,18446744073709551615UL,0xBB47L},{0x5939L,-10L,1L,-9L,18446744073709551611UL,0x08D2L},{0UL,0x52A225A8L,0L,1L,0x3D015D56L,0xF066L},{0xA20DL,0xE4A16016L,-9L,0L,0xE98DDD9EL,1L}},{{0x67A8L,5L,0xB8838B9C543437DALL,0x9027L,7UL,-1L},{0UL,-1L,0x839176EC824061E3LL,0x4F03L,18446744073709551609UL,0xB6E5L},{0xF4E9L,1L,-6L,0x476EL,18446744073709551608UL,0xF9CCL},{0xC73EL,0xC29183A3L,0x179A345722FB22D0LL,0L,18446744073709551615UL,-1L},{65530UL,-2L,0xFFD04AB980BE7D7ALL,0xCF37L,1UL,0x9AFFL}},{{9UL,0x7F7CBA25L,0xAA24B6D029A79306LL,0x653FL,0x5769E90DL,0L},{0x9D8EL,0x22D61618L,0xE2AD8F1DAB9524A2LL,-1L,0UL,0L},{0x687EL,7L,0x0E12FE7324F2782ALL,0x1A93L,0UL,0xAD95L},{1UL,0x29F4EE44L,0x2D263616B983BC1DLL,0xA0BEL,0xEC4D18DCL,0x58FAL},{65529UL,9L,0x8E9B7926347CD1DCLL,0L,0x39C7567BL,0xE9F5L}},{{0UL,0xB07F2A8BL,-1L,0xC44DL,1UL,0x063BL},{65530UL,-2L,0xFFD04AB980BE7D7ALL,0xCF37L,1UL,0x9AFFL},{0xF4E9L,1L,-6L,0x476EL,18446744073709551608UL,0xF9CCL},{65530UL,-2L,0xFFD04AB980BE7D7ALL,0xCF37L,1UL,0x9AFFL},{0UL,0xB07F2A8BL,-1L,0xC44DL,1UL,0x063BL}}},{{{4UL,0L,1L,0xAFCCL,1UL,-1L},{0xAFFDL,-1L,0xB228D5863DB9BC0FLL,0x96ABL,6UL,0x193FL},{0x5939L,-10L,1L,-9L,18446744073709551611UL,0x08D2L},{0xE223L,1L,0xFE41C3956D99E69ELL,0xC6DAL,0x01B76340L,0xDB00L},{1UL,0x29F4EE44L,0x2D263616B983BC1DLL,0xA0BEL,0xEC4D18DCL,0x58FAL}},{{0x0D7AL,-1L,9L,0x7973L,18446744073709551613UL,0L},{1UL,0xC468D78FL,0x39E3F63190A6632FLL,-1L,1UL,0L},{65527UL,0L,0x36D5A7869C72776ELL,0L,0UL,8L},{0x4773L,0xF460C0EEL,0xFFEA52ED1EEAA21FLL,0x4D60L,18446744073709551615UL,0xADB0L},{0x61F0L,-1L,0xCDC94ECEE0DB94E0LL,1L,0x0D59A368L,-1L}},{{0x0AB5L,0x5CB5E7A7L,0L,0x479EL,0x39A9A80CL,-6L},{0x5939L,-10L,1L,-9L,18446744073709551611UL,0x08D2L},{1UL,0x29F4EE44L,0x2D263616B983BC1DLL,0xA0BEL,0xEC4D18DCL,0x58FAL},{0xAFFDL,-1L,0xB228D5863DB9BC0FLL,0x96ABL,6UL,0x193FL},{1UL,0x29F4EE44L,0x2D263616B983BC1DLL,0xA0BEL,0xEC4D18DCL,0x58FAL}},{{0x4773L,0xF460C0EEL,0xFFEA52ED1EEAA21FLL,0x4D60L,18446744073709551615UL,0xADB0L},{0x4773L,0xF460C0EEL,0xFFEA52ED1EEAA21FLL,0x4D60L,18446744073709551615UL,0xADB0L},{0UL,-1L,0x839176EC824061E3LL,0x4F03L,18446744073709551609UL,0xB6E5L},{65527UL,0L,0x36D5A7869C72776ELL,0L,0UL,8L},{0UL,0xB07F2A8BL,-1L,0xC44DL,1UL,0x063BL}},{{1UL,0x29F4EE44L,0x2D263616B983BC1DLL,0xA0BEL,0xEC4D18DCL,0x58FAL},{0UL,1L,0x4A20C8D91BA7469FLL,-1L,0x77B0BA2CL,0x05C3L},{0x640DL,0xD85689E5L,0xA994BE0A22320633LL,0xA239L,18446744073709551615UL,6L},{0x687EL,7L,0x0E12FE7324F2782ALL,0x1A93L,0UL,0xAD95L},{65529UL,9L,0x8E9B7926347CD1DCLL,0L,0x39C7567BL,0xE9F5L}},{{0xF4E9L,1L,-6L,0x476EL,18446744073709551608UL,0xF9CCL},{65535UL,-1L,0x53FDCE9B7E83AC69LL,1L,18446744073709551613UL,0L},{0x61F0L,-1L,0xCDC94ECEE0DB94E0LL,1L,0x0D59A368L,-1L},{0UL,0x0686C5DAL,0x8414168538732B21LL,-7L,18446744073709551606UL,-1L},{65530UL,-2L,0xFFD04AB980BE7D7ALL,0xCF37L,1UL,0x9AFFL}},{{0UL,0x1743C508L,1L,-9L,0xD3968E83L,0x01E6L},{0UL,1L,0x4A20C8D91BA7469FLL,-1L,0x77B0BA2CL,0x05C3L},{0UL,1L,0x4A20C8D91BA7469FLL,-1L,0x77B0BA2CL,0x05C3L},{0UL,0x1743C508L,1L,-9L,0xD3968E83L,0x01E6L},{0xA20DL,0xE4A16016L,-9L,0L,0xE98DDD9EL,1L}}},{{{1UL,0xC468D78FL,0x39E3F63190A6632FLL,-1L,1UL,0L},{0x4773L,0xF460C0EEL,0xFFEA52ED1EEAA21FLL,0x4D60L,18446744073709551615UL,0xADB0L},{0UL,0x274EEE24L,0xA2072C5E54166E7CLL,-6L,18446744073709551615UL,-1L},{0UL,0xB07F2A8BL,-1L,0xC44DL,1UL,0x063BL},{4UL,1L,-4L,0L,18446744073709551615UL,-10L}},{{0x640DL,0xD85689E5L,0xA994BE0A22320633LL,0xA239L,18446744073709551615UL,6L},{0x5939L,-10L,1L,-9L,18446744073709551611UL,0x08D2L},{0UL,0x9951ACACL,0xFD8889A77E123A8CLL,-7L,0x0A60CB00L,9L},{0x0AB5L,0x5CB5E7A7L,0L,0x479EL,0x39A9A80CL,-6L},{0UL,1L,0x4A20C8D91BA7469FLL,-1L,0x77B0BA2CL,0x05C3L}},{{65535UL,-1L,0x53FDCE9B7E83AC69LL,1L,18446744073709551613UL,0L},{1UL,0xC468D78FL,0x39E3F63190A6632FLL,-1L,1UL,0L},{0UL,0xB07F2A8BL,-1L,0xC44DL,1UL,0x063BL},{0UL,0xB07F2A8BL,-1L,0xC44DL,1UL,0x063BL},{1UL,0xC468D78FL,0x39E3F63190A6632FLL,-1L,1UL,0L}},{{65529UL,9L,0x8E9B7926347CD1DCLL,0L,0x39C7567BL,0xE9F5L},{0xAFFDL,-1L,0xB228D5863DB9BC0FLL,0x96ABL,6UL,0x193FL},{0xDF80L,9L,0xC2A12C240C774795LL,-4L,18446744073709551615UL,0xBB47L},{0UL,0x1743C508L,1L,-9L,0xD3968E83L,0x01E6L},{4UL,0L,1L,0xAFCCL,1UL,-1L}},{{0x7AD4L,1L,0x62709E712BC023DDLL,1L,0x545C5AFCL,0xADC9L},{65530UL,-2L,0xFFD04AB980BE7D7ALL,0xCF37L,1UL,0x9AFFL},{0x4773L,0xF460C0EEL,0xFFEA52ED1EEAA21FLL,0x4D60L,18446744073709551615UL,0xADB0L},{0UL,0x0686C5DAL,0x8414168538732B21LL,-7L,18446744073709551606UL,-1L},{0UL,0x274EEE24L,0xA2072C5E54166E7CLL,-6L,18446744073709551615UL,-1L}},{{0xAFFDL,-1L,0xB228D5863DB9BC0FLL,0x96ABL,6UL,0x193FL},{0x9D8EL,0x22D61618L,0xE2AD8F1DAB9524A2LL,-1L,0UL,0L},{0UL,0x52A225A8L,0L,1L,0x3D015D56L,0xF066L},{0x687EL,7L,0x0E12FE7324F2782ALL,0x1A93L,0UL,0xAD95L},{0x687EL,7L,0x0E12FE7324F2782ALL,0x1A93L,0UL,0xAD95L}},{{0x7AD4L,1L,0x62709E712BC023DDLL,1L,0x545C5AFCL,0xADC9L},{0UL,-1L,0x839176EC824061E3LL,0x4F03L,18446744073709551609UL,0xB6E5L},{0x7AD4L,1L,0x62709E712BC023DDLL,1L,0x545C5AFCL,0xADC9L},{1UL,0xC468D78FL,0x39E3F63190A6632FLL,-1L,1UL,0L},{0UL,-1L,0x839176EC824061E3LL,0x4F03L,18446744073709551609UL,0xB6E5L}}}};
    int32_t *l_279 = (void*)0;
    uint64_t *l_333 = &g_316;
    uint8_t l_370 = 0x14L;
    int32_t **l_457 = &l_279;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_118[i] = 4294967292UL;
    if ((l_72 <= l_72))
    { 
        uint32_t l_75 = 0UL;
        uint8_t l_76 = 0xC9L;
        uint16_t **l_100 = &g_89[0];
        uint16_t **l_102 = &g_89[0];
        const union U2 *l_137 = &g_83[2][1][1];
        int32_t l_175[5];
        int32_t *l_202 = &g_6;
        int32_t **l_203 = &l_202;
        int i;
        for (i = 0; i < 5; i++)
            l_175[i] = 1L;
lbl_81:
        p_68 ^= 0x22591552L;
        for (p_70 = (-11); (p_70 > 9); ++p_70)
        { 
            union U2 l_105 = {-9L};
            int32_t l_115 = 0x7D1F0300L;
            int32_t l_117 = 0x0488F66FL;
            const uint16_t **l_133[5][2];
            const uint16_t ***l_132 = &l_133[1][0];
            const uint16_t ****l_131 = &l_132;
            int8_t *l_176 = &g_110;
            int32_t l_180 = (-1L);
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 2; j++)
                    l_133[i][j] = (void*)0;
            }
            if (l_72)
            { 
                uint16_t *l_77 = &g_78[1];
                int32_t *l_80[1][4] = {{&g_9,&g_9,&g_9,&g_9}};
                int32_t **l_79 = &l_80[0][1];
                union U2 **l_84 = &g_82;
                uint16_t **l_91 = (void*)0;
                uint16_t ***l_90 = &l_91;
                int i, j;
                (*l_79) = (l_75 , ((((*l_77) = l_76) , p_70) , &p_68));
                if (l_75)
                    goto lbl_81;
                (*l_84) = g_82;
                for (g_22 = 0; (g_22 < (-21)); g_22--)
                { 
                    return l_87;
                }
                (*l_90) = g_88;
            }
            else
            { 
                uint16_t ***l_101 = &l_100;
                uint16_t ** const *l_107 = &g_88;
                uint16_t ** const **l_106 = &l_107;
                int32_t l_108 = 0xDD35AB2AL;
                int8_t *l_109 = &g_110;
                uint8_t l_141 = 0xBFL;
                if (((safe_add_func_int8_t_s_s(g_47.f2, (((((*l_109) &= (((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u((((*l_87) = g_2) <= (safe_rshift_func_int8_t_s_u((((((*l_101) = l_100) == l_102) | (safe_lshift_func_uint8_t_u_u((l_101 == ((*l_106) = (l_105 , l_101))), 5))) != (-1L)), l_108))), l_105.f0)) < p_70), 65529UL)) < p_70) | g_47.f2)) == g_47.f3) ^ p_70) < p_70))) <= 0xDEE7L))
                { 
                    int32_t *l_111 = &l_108;
                    int32_t *l_112 = (void*)0;
                    int32_t *l_113 = &g_2;
                    int32_t *l_114[2];
                    struct S0 l_130[3] = {{0x0670L,0xC071E14FL,0x225A2E691EA77C7ALL,0xEF1CL,0x289D3A15L,1L},{0x0670L,0xC071E14FL,0x225A2E691EA77C7ALL,0xEF1CL,0x289D3A15L,1L},{0x0670L,0xC071E14FL,0x225A2E691EA77C7ALL,0xEF1CL,0x289D3A15L,1L}};
                    uint16_t *l_134 = (void*)0;
                    uint16_t *l_135 = &g_136[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_114[i] = &g_9;
                    l_118[0]++;
                    (*l_111) = (0L > ((safe_mul_func_uint8_t_u_u((~0x86AF607FL), (((*l_135) |= (safe_lshift_func_int8_t_s_u((((p_70 || ((~(g_127[0] == (l_130[2] , l_131))) , l_117)) > g_83[0][1][0].f0) != g_78[1]), l_116))) <= 65535UL))) | l_108));
                }
                else
                { 
                    const union U2 **l_138 = &l_137;
                    (*l_138) = l_137;
                    g_9 |= (safe_add_func_int16_t_s_s((l_141 < 0x3A66946F2EC8A694LL), g_78[0]));
                    if (l_118[0])
                        break;
                }
            }
            g_9 &= g_47.f4;
            for (l_76 = 0; (l_76 <= 2); l_76 += 1)
            { 
                int32_t l_161 = (-1L);
                union U2 **l_166 = &g_82;
                uint16_t * const *l_171 = &g_89[0];
                int32_t *l_177 = &g_2;
                int32_t *l_178 = &l_116;
                int32_t *l_179[3][5] = {{(void*)0,&g_6,(void*)0,(void*)0,&g_6},{&l_161,&g_6,&g_6,&l_161,&g_6},{&g_6,&g_6,(void*)0,&g_6,&g_6}};
                int i, j;
                for (g_2 = 2; (g_2 >= 0); g_2 -= 1)
                { 
                    int32_t *l_143 = &l_115;
                    int i;
                    (*l_143) = ((g_142 , l_118[(l_76 + 1)]) == (l_118[(g_2 + 1)] < l_118[(l_76 + 1)]));
                }
                for (g_142.f1.f0 = 0; (g_142.f1.f0 <= 0); g_142.f1.f0 += 1)
                { 
                    int32_t *l_145 = &g_6;
                    int32_t **l_144 = &l_145;
                    int i;
                    (*l_144) = &p_68;
                    if (g_136[l_76])
                        continue;
                }
                if (g_136[l_76])
                    continue;
                if (p_68)
                { 
                    int8_t **l_156 = &l_87;
                    int8_t l_158[6] = {0x48L,0x2AL,0x48L,0x48L,0x2AL,0x48L};
                    uint64_t *l_159 = &g_160;
                    int32_t *l_162 = &l_161;
                    uint32_t l_163 = 0x566CB355L;
                    int i;
                    l_163 &= ((*l_162) = (safe_rshift_func_uint16_t_u_s((((*l_159) ^= (safe_div_func_uint32_t_u_u((l_118[l_76] = ((safe_mod_func_uint32_t_u_u(p_66.f0, p_66.f0)) != 0x9814L)), (((((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((&p_70 != ((*l_156) = &g_22)), p_66.f0)), 9)) ^ (g_142.f0 = ((l_157 , 0x240BL) , l_158[0]))) && 0UL) > g_136[0]) && g_136[2])))) != 0x76EE3E29BDB73D74LL), l_161)));
                }
                else
                { 
                    int16_t *l_172 = &g_142.f1.f3;
                    int32_t *l_173 = (void*)0;
                    int32_t *l_174[4] = {&g_9,&g_9,&g_9,&g_9};
                    int i;
                    l_175[3] = (((p_68 >= (safe_div_func_uint8_t_u_u(((&l_137 == l_166) > ((*l_172) = (safe_rshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s((-1L), (g_110 , ((l_171 == (void*)0) ^ l_117)))), l_161)))), g_110))) ^ p_70) == l_118[1]);
                    return l_176;
                }
                --g_181;
            }
            for (g_142.f0 = 0; (g_142.f0 <= 1); g_142.f0 += 1)
            { 
                const int32_t *l_184 = &l_175[3];
                int32_t l_187 = (-4L);
                int i;
                if (g_78[g_142.f0])
                    break;
                l_184 = (void*)0;
                for (l_157.f1.f0 = 0; (l_157.f1.f0 <= 3); l_157.f1.f0 += 1)
                { 
                    int32_t *l_185 = &l_117;
                    int32_t *l_186[3][3][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    int i, j, k;
                    g_188++;
                }
            }
            for (g_142.f0 = (-1); (g_142.f0 > 6); g_142.f0 = safe_add_func_uint8_t_u_u(g_142.f0, 1))
            { 
                int64_t l_193 = (-4L);
                if (l_193)
                { 
                    return &g_22;
                }
                else
                { 
                    int32_t *l_194 = &g_2;
                    int32_t *l_195 = &l_117;
                    int32_t *l_196[3];
                    int32_t **l_200 = &l_196[0];
                    int32_t **l_201[1];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_196[i] = &g_6;
                    for (i = 0; i < 1; i++)
                        l_201[i] = &l_194;
                    ++g_197[2];
                    l_202 = ((*l_200) = &g_2);
                }
            }
        }
        (*l_203) = &p_68;
    }
    else
    { 
        uint32_t l_221 = 1UL;
        union U1 l_232 = {-1L};
        union U2 *l_255[4];
        int16_t l_266[1];
        int32_t l_273 = 6L;
        uint16_t *l_284 = &l_249[5][5][1].f0;
        int32_t l_313 = (-7L);
        union U1 *l_377 = &g_378;
        union U1 *l_380 = (void*)0;
        union U1 **l_379 = &l_380;
        int8_t *l_448 = &l_157.f0;
        int32_t *l_451 = &l_313;
        int i;
        for (i = 0; i < 4; i++)
            l_255[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_266[i] = 0x54FFL;
        for (l_157.f2.f4 = 0; (l_157.f2.f4 != 6); l_157.f2.f4 = safe_add_func_uint32_t_u_u(l_157.f2.f4, 1))
        { 
            uint32_t l_220 = 4294967293UL;
            uint16_t **l_228 = &g_89[0];
            int16_t *l_233 = (void*)0;
            int16_t *l_234 = &g_142.f2.f5;
            int16_t *l_235[6][2] = {{&g_236,&g_236},{(void*)0,&g_236},{&g_236,(void*)0},{&g_236,&g_236},{(void*)0,&g_236},{&g_236,(void*)0}};
            int32_t l_237 = 0xF8D0BCCDL;
            union U2 *l_238 = &g_83[0][1][0];
            uint64_t l_243 = 7UL;
            uint64_t *l_258 = &l_243;
            int32_t *l_276 = (void*)0;
            int32_t **l_277 = (void*)0;
            int32_t **l_278[6][1][2] = {{{&l_276,&l_276}},{{(void*)0,&l_276}},{{&l_276,(void*)0}},{{&l_276,&l_276}},{{(void*)0,&l_276}},{{&l_276,(void*)0}}};
            union U1 l_282[7] = {{0x3DL},{0x3DL},{0x3DL},{0x3DL},{0x3DL},{0x3DL},{0x3DL}};
            union U1 *l_335 = &l_157;
            union U1 **l_334 = &l_335;
            uint32_t l_342[6][1] = {{0xB9520D26L},{0xBD4BF0A5L},{0xB9520D26L},{0xBD4BF0A5L},{0xB9520D26L},{0xBD4BF0A5L}};
            int i, j, k;
            for (g_2 = 0; (g_2 <= 3); g_2 += 1)
            { 
                for (g_142.f1.f0 = 0; (g_142.f1.f0 <= 2); g_142.f1.f0 += 1)
                { 
                    uint8_t *l_217 = &g_218;
                    int32_t *l_222 = (void*)0;
                    int i;
                    p_68 = ((g_197[g_2] != (&p_68 != ((g_197[g_2] != ((((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((((((void*)0 == g_210) & (((((((~(safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((g_47 , ((*l_217) &= g_78[(g_2 + 1)])), 2)), 7))) > p_68) == p_70) & 0xF4L) > p_68) > 1UL) != g_188)) , p_66.f0) && 5L), p_68)), l_219)) , 0x4E2B856EL) || l_220) <= l_221)) , &g_2))) , g_78[(g_2 + 1)]);
                }
            }
            if ((g_142 , (!(safe_lshift_func_int8_t_s_s(0x06L, (safe_mul_func_uint8_t_u_u((0xF110F92F17FB0F1FLL || p_68), ((l_237 |= ((l_228 == (l_229 = l_229)) && ((**g_210) &= ((safe_mod_func_uint64_t_u_u((((l_232 , l_220) | 0xBD78L) > 0L), g_47.f1)) | p_70)))) | (**g_129)))))))))
            { 
                union U2 **l_239 = &g_82;
                (*l_239) = l_238;
                return &g_22;
            }
            else
            { 
                uint64_t *l_254 = &g_160;
                int32_t l_256 = 0x8C44A252L;
                uint64_t *l_257[7][1][6] = {{{&l_243,&l_243,&l_243,&l_243,&l_243,&l_243}},{{(void*)0,&l_243,&l_243,&l_243,&l_243,&l_243}},{{&l_243,&l_243,&l_243,(void*)0,(void*)0,&l_243}},{{&l_243,&l_243,(void*)0,&l_243,(void*)0,&l_243}},{{(void*)0,&l_243,&l_243,&l_243,&l_243,&l_243}},{{&l_243,(void*)0,&l_243,&l_243,(void*)0,(void*)0}},{{&l_243,(void*)0,&l_243,&l_243,&l_243,&l_243}}};
                int32_t *l_259 = (void*)0;
                int32_t *l_260 = &l_116;
                int i, j, k;
                if (g_188)
                { 
                    return &g_22;
                }
                else
                { 
                    int32_t *l_240 = &l_237;
                    int32_t *l_241 = &l_237;
                    int32_t *l_242[2][5][5] = {{{(void*)0,(void*)0,&g_6,&g_9,&g_2},{&l_237,&l_116,&l_237,&l_116,&l_237},{&l_116,&l_116,(void*)0,(void*)0,&g_2},{(void*)0,&l_116,&g_9,&g_9,&l_116},{&l_237,(void*)0,(void*)0,&g_9,&g_2}},{{(void*)0,&g_2,(void*)0,(void*)0,&l_116},{&g_9,&l_237,&g_2,&l_116,&l_237},{(void*)0,&g_9,&l_237,&g_9,(void*)0},{&l_237,(void*)0,&l_237,&g_2,(void*)0},{(void*)0,&g_6,&g_2,(void*)0,&l_116}}};
                    const int32_t *l_247 = &g_47.f1;
                    const int32_t **l_246 = &l_247;
                    int i, j, k;
                    --l_243;
                    g_248 = ((*l_246) = &g_2);
                    if (l_219)
                        break;
                }
                (*l_260) ^= (((l_249[5][5][1] , ((l_237 &= (safe_mul_func_uint64_t_u_u(p_68, (((g_47.f3 > (((((*l_254) |= l_221) , (*g_82)) , l_255[2]) != &p_66)) , l_256) < g_47.f3)))) , g_47.f1)) , (void*)0) == l_258);
                l_273 |= (((safe_unary_minus_func_uint32_t_u(g_160)) > (l_266[0] = (g_197[0] < (safe_mod_func_uint32_t_u_u(l_232.f0, (safe_lshift_func_uint8_t_u_s(0x33L, 7))))))) , ((((*l_258)--) , (safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(l_232.f0, ((*l_234) = p_68))), 0x81L))) ^ l_266[0]));
            }
            if ((safe_mul_func_int8_t_s_s(((l_279 = l_276) == &p_68), (l_232 , 0L))))
            { 
                uint32_t l_298 = 18446744073709551614UL;
                const int64_t l_307 = 0x76D8D1D656DAAFBELL;
                uint8_t *l_308[3];
                int32_t l_314 = 0x816A94E2L;
                int32_t l_315[4] = {(-4L),(-4L),(-4L),(-4L)};
                int32_t *l_319[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_308[i] = &g_197[2];
                for (i = 0; i < 3; i++)
                    l_319[i] = &g_9;
                for (g_142.f1.f4 = (-4); (g_142.f1.f4 > 37); g_142.f1.f4 = safe_add_func_uint8_t_u_u(g_142.f1.f4, 1))
                { 
                    uint16_t *l_283[3];
                    union U2 l_297 = {-1L};
                    uint8_t *l_299 = &l_219;
                    union U2 **l_300 = &g_82;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_283[i] = (void*)0;
                    g_9 &= (l_282[1] , p_66.f0);
                    (*l_300) = ((((l_284 = l_283[0]) == (*g_129)) < (safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s(((g_9 &= (((safe_add_func_int32_t_s_s((g_2 = (*g_248)), ((safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((*l_299) = (((((**g_210) ^ (l_297 , 0L)) , ((p_67 != (void*)0) , 0xA3L)) >= l_298) >= p_68)), (**g_210))), l_297.f0)) , 4294967295UL))) ^ p_66.f0) < p_68)) <= g_197[2]), p_70)) != g_236), l_298)), l_297.f0))) , &g_83[0][1][0]);
                    if (p_70)
                        break;
                }
                g_6 = (((&g_83[0][1][0] == &p_66) || (*p_67)) > (((safe_mul_func_uint8_t_u_u((l_273 = (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((*g_248) <= l_307), 1)), l_273))), (((safe_rshift_func_int16_t_s_s((((*p_67) != 0xA3L) <= p_68), 4)) || g_197[2]) , (*p_67)))) ^ p_70) < (*p_67)));
                for (g_188 = (-9); (g_188 < 19); g_188++)
                { 
                    g_316++;
                    g_2 = 0L;
                    l_319[1] = &p_68;
                }
                g_248 = &l_273;
            }
            else
            { 
                int8_t * const **l_321 = &g_210;
                int8_t * const ***l_320 = &l_321;
                int32_t l_332 = 0x191E2DD5L;
                (*l_320) = &g_210;
                for (l_232.f2.f5 = (-16); (l_232.f2.f5 >= 27); l_232.f2.f5 = safe_add_func_uint8_t_u_u(l_232.f2.f5, 1))
                { 
                    int8_t *l_324 = (void*)0;
                    return l_324;
                }
                l_116 = ((l_313 = (((1L | l_266[0]) <= ((+(safe_add_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s(((*l_87) = ((g_142.f0 | ((((safe_div_func_uint8_t_u_u(l_332, l_266[0])) , ((****l_320) = 5L)) || (g_47.f0 ^ p_68)) >= l_332)) , (*p_67))), (-1L))) , &g_316) != l_333) > l_232.f0), p_66.f0))) && p_66.f0)) >= 0xA126096AL)) >= g_47.f4);
            }
            (*l_334) = &g_142;
            if ((*g_248))
            { 
                g_248 = (void*)0;
                if (p_68)
                    break;
            }
            else
            { 
                int64_t l_355[1][7] = {{0x5439D7C7F515F2E3LL,0x5439D7C7F515F2E3LL,0x5439D7C7F515F2E3LL,0x5439D7C7F515F2E3LL,0x5439D7C7F515F2E3LL,0x5439D7C7F515F2E3LL,0x5439D7C7F515F2E3LL}};
                const struct S0 l_360 = {0xFCA6L,0xD8ECD150L,-6L,0x21EEL,0x98A727F9L,0x0FC8L};
                int32_t l_361 = 0xEB4426F9L;
                uint32_t *l_362 = &l_118[2];
                int32_t l_363 = 0x7093A5E4L;
                int8_t *l_367 = &g_110;
                int32_t l_368[4][7] = {{1L,1L,(-5L),1L,1L,0xABBAB04BL,0xABBAB04BL},{1L,1L,(-5L),1L,1L,0xABBAB04BL,0xABBAB04BL},{1L,1L,(-5L),1L,1L,0xABBAB04BL,0xABBAB04BL},{1L,1L,(-5L),1L,1L,0xABBAB04BL,0xABBAB04BL}};
                int i, j;
                if (((safe_rshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(65535UL, ((l_342[4][0] && ((g_2 == (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(((p_66.f0 , (((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((*l_362) = (((safe_mod_func_uint64_t_u_u((l_355[0][5] != ((safe_rshift_func_int16_t_s_s((l_361 ^= (l_360 , 3L)), l_232.f0)) >= 0UL)), l_313)) > (**g_210)) , g_218)), 4294967292UL)), 0xE474L)) == (-6L)) < 0L)) & p_68), p_70)), (*p_67))), 0UL))) >= 0x40DDL)) <= (-1L)))) <= l_360.f4), (*p_67))) , l_360.f3), 7)) & 0x22L))
                { 
                    g_364++;
                }
                else
                { 
                    return l_367;
                }
                if ((*g_248))
                    break;
                --l_370;
            }
        }
        if (((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((l_249[5][5][1].f0 , ((l_377 = &g_142) == ((*l_379) = &l_157))), 6)), (**g_210))) && (safe_mod_func_uint64_t_u_u((+(l_313 &= l_266[0])), (p_66.f0 , (safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s(p_70, 4294967288UL)), 0x00L)))))))
        { 
            uint64_t l_388 = 0xB2FF8A7F073D7F32LL;
            p_68 = ((l_388 <= (safe_div_func_uint8_t_u_u(((p_70 , 253UL) & (safe_rshift_func_uint16_t_u_s(p_68, ((p_68 < (((((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(p_66.f0, (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(((((***g_128) = 65535UL) && 0x58E4L) < (-9L)), l_232.f0)), l_388)), p_70)), 15)))), g_181)) <= l_232.f0), p_70)), p_66.f0)) < 0x6BL) <= g_218) , l_249[5][5][1].f1), p_70)), 0L)), l_388)) , g_110) ^ p_68) , g_369) | 9UL)) , g_136[2])))), p_66.f0))) , 0x8C321605L);
            return &g_110;
        }
        else
        { 
            union U1 *l_415 = &l_157;
            int32_t l_429 = (-5L);
            union U2 *l_434 = &g_83[0][1][0];
            int8_t **l_444[1];
            int8_t ***l_443 = &l_444[0];
            int8_t ****l_442 = &l_443;
            int8_t *l_456[4][6][4] = {{{&g_378.f0,&g_110,&l_232.f0,&g_110},{&g_22,&l_232.f0,&l_232.f0,&l_232.f0},{&g_110,&l_232.f0,&l_232.f0,&g_110},{&l_232.f0,&g_110,&g_22,&g_378.f0},{&l_232.f0,&g_22,&l_232.f0,&l_232.f0},{&g_110,&g_378.f0,&l_232.f0,&l_232.f0}},{{&g_22,&g_22,&l_232.f0,&g_378.f0},{&g_378.f0,&g_110,&l_232.f0,&g_110},{&g_22,&l_232.f0,&l_232.f0,&l_232.f0},{&g_110,&l_232.f0,&l_232.f0,&g_110},{&l_232.f0,&g_110,&g_22,&g_378.f0},{&l_232.f0,&g_22,&l_232.f0,&l_232.f0}},{{&g_110,&g_378.f0,&l_232.f0,&l_232.f0},{&g_22,&g_22,&l_232.f0,&g_378.f0},{&g_378.f0,&g_110,&l_232.f0,&g_110},{&g_22,&l_232.f0,&l_232.f0,&l_232.f0},{&g_110,&l_232.f0,&l_232.f0,&g_110},{&l_232.f0,&g_110,&g_22,&g_378.f0}},{{&l_232.f0,&g_22,&l_232.f0,&l_232.f0},{&g_110,&g_378.f0,&l_232.f0,&l_232.f0},{&g_22,&g_22,&l_232.f0,&g_378.f0},{&g_378.f0,&g_110,&l_232.f0,&g_110},{&g_22,&l_232.f0,&l_232.f0,&l_232.f0},{&g_110,&l_232.f0,&l_232.f0,&g_110}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_444[i] = (void*)0;
            (*l_379) = l_415;
            l_116 |= (l_273 ^= p_68);
            for (g_142.f1.f0 = 0; (g_142.f1.f0 >= 17); g_142.f1.f0 = safe_add_func_uint8_t_u_u(g_142.f1.f0, 1))
            { 
                int32_t *l_418 = &l_116;
                int32_t *l_419 = &l_116;
                int32_t *l_420 = &l_313;
                int32_t *l_421 = &g_9;
                int32_t *l_422 = (void*)0;
                int32_t *l_423 = (void*)0;
                int32_t *l_424 = &l_313;
                int32_t l_425 = (-8L);
                int32_t *l_426 = &l_116;
                int32_t *l_427[5][7][2] = {{{(void*)0,&l_116},{&l_116,&l_116},{&g_6,&l_116},{&g_6,&g_6},{&g_9,&l_425},{&g_9,&g_6},{&g_6,&l_116}},{{&g_6,&l_116},{&l_116,&l_116},{(void*)0,(void*)0},{(void*)0,&l_116},{(void*)0,&g_2},{&l_116,&l_425},{&l_116,&g_2}},{{&g_6,(void*)0},{&l_425,&g_2},{&l_313,&g_6},{&l_425,&g_9},{&g_2,&l_116},{&g_6,&l_116},{&g_2,&g_9}},{{&l_425,&g_6},{&l_313,&g_2},{&l_425,(void*)0},{&g_6,&g_2},{&l_116,&l_425},{&l_116,&g_2},{(void*)0,&l_116}},{{(void*)0,(void*)0},{(void*)0,&l_116},{&l_116,&l_116},{&g_6,&l_116},{&g_6,&g_6},{&g_2,(void*)0},{&g_2,&g_6}}};
                int16_t l_428[1];
                union U2 **l_435 = &l_255[2];
                int32_t **l_449 = (void*)0;
                int32_t **l_450[4][3];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_428[i] = 0x8087L;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_450[i][j] = (void*)0;
                }
                g_430++;
                (*l_419) = (p_66.f0 != ((+(((((((*l_435) = l_434) != &g_83[1][1][1]) < (safe_lshift_func_uint16_t_u_s((l_429 | ((g_2 , (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((void*)0 == l_442), 1)), (*l_419)))) & (**g_129))), 1))) , (*l_434)) , g_236) && 0xD79F1983L)) , g_136[0]));
                for (l_232.f2.f5 = 0; (l_232.f2.f5 <= (-24)); l_232.f2.f5 = safe_sub_func_uint64_t_u_u(l_232.f2.f5, 3))
                { 
                    int8_t *l_447 = &l_232.f0;
                    return &g_22;
                }
                l_451 = &g_6;
            }
            for (g_378.f1.f5 = 0; (g_378.f1.f5 < 20); g_378.f1.f5 = safe_add_func_int16_t_s_s(g_378.f1.f5, 8))
            { 
                uint32_t l_454[2];
                uint16_t l_455 = 0x3A6BL;
                int i;
                for (i = 0; i < 2; i++)
                    l_454[i] = 0UL;
                if (l_454[1])
                { 
                    if (g_160)
                        break;
                }
                else
                { 
                    (*l_451) = l_455;
                    return &g_22;
                }
                return &g_22;
            }
        }
    }
    (*l_457) = &l_116;
    return l_87;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_25[i][j], "g_25[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
    transparent_crc(g_47.f1, "g_47.f1", print_hash_value);
    transparent_crc(g_47.f2, "g_47.f2", print_hash_value);
    transparent_crc(g_47.f3, "g_47.f3", print_hash_value);
    transparent_crc(g_47.f4, "g_47.f4", print_hash_value);
    transparent_crc(g_47.f5, "g_47.f5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_78[i], "g_78[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_83[i][j][k].f0, "g_83[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_136[i], "g_136[i]", print_hash_value);

    }
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_197[i], "g_197[i]", print_hash_value);

    }
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_378.f0, "g_378.f0", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_582[i][j][k], "g_582[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_677, "g_677", print_hash_value);
    transparent_crc(g_827, "g_827", print_hash_value);
    transparent_crc(g_851, "g_851", print_hash_value);
    transparent_crc(g_932.f0, "g_932.f0", print_hash_value);
    transparent_crc(g_969.f0, "g_969.f0", print_hash_value);
    transparent_crc(g_984.f0, "g_984.f0", print_hash_value);
    transparent_crc(g_984.f1, "g_984.f1", print_hash_value);
    transparent_crc(g_984.f2, "g_984.f2", print_hash_value);
    transparent_crc(g_984.f3, "g_984.f3", print_hash_value);
    transparent_crc(g_984.f4, "g_984.f4", print_hash_value);
    transparent_crc(g_984.f5, "g_984.f5", print_hash_value);
    transparent_crc(g_1027, "g_1027", print_hash_value);
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1098, "g_1098", print_hash_value);
    transparent_crc(g_1099, "g_1099", print_hash_value);
    transparent_crc(g_1100, "g_1100", print_hash_value);
    transparent_crc(g_1114, "g_1114", print_hash_value);
    transparent_crc(g_1115, "g_1115", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1125[i][j], "g_1125[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1126, "g_1126", print_hash_value);
    transparent_crc(g_1129, "g_1129", print_hash_value);
    transparent_crc(g_1130, "g_1130", print_hash_value);
    transparent_crc(g_1142.f0, "g_1142.f0", print_hash_value);
    transparent_crc(g_1177, "g_1177", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1200[i][j][k], "g_1200[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1358, "g_1358", print_hash_value);
    transparent_crc(g_1430, "g_1430", print_hash_value);
    transparent_crc(g_1881, "g_1881", print_hash_value);
    transparent_crc(g_1883, "g_1883", print_hash_value);
    transparent_crc(g_1885, "g_1885", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1887[i][j], "g_1887[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1915, "g_1915", print_hash_value);
    transparent_crc(g_1952, "g_1952", print_hash_value);
    transparent_crc(g_1953, "g_1953", print_hash_value);
    transparent_crc(g_1954, "g_1954", print_hash_value);
    transparent_crc(g_1962, "g_1962", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
