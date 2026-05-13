// SPDX-License-Identifier: MIT
// cctest_csmith_c2eee258.c --- cctest case csmith_c2eee258 (csmith seed 3270435416)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa741babe */

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

// Options:   -s 3270435416 -o /tmp/csmith_gen_ng9j3jh4/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   const int32_t  f3;
   uint16_t  f4;
};

union U1 {
   const int32_t  f0;
   const int16_t  f1;
   int64_t  f2;
};

union U3 {
   const uint32_t  f0;
   struct S0  f1;
   int64_t  f2;
};

union U4 {
   struct S0  f0;
   int16_t  f1;
   uint32_t  f2;
};


static int32_t g_9 = (-1L);
static union U3 g_21 = {0x86335C0DL};
static uint16_t g_51 = 9UL;
static int32_t g_59[3][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}};
static uint16_t g_64 = 0x8260L;
static union U1 g_71 = {7L};
static uint32_t g_73 = 1UL;
static uint32_t g_74 = 0xE4C4DC47L;
static uint32_t g_81 = 18446744073709551613UL;
static uint32_t g_82 = 4294967295UL;
static int32_t g_97 = 1L;
static int32_t g_100 = 7L;



static int16_t  func_1(void);
static int32_t  func_2(union U1  p_3, uint64_t  p_4, uint64_t  p_5);
static uint16_t  func_10(uint32_t  p_11, int32_t  p_12, union U3  p_13, int64_t  p_14, uint32_t  p_15);
static union U4  func_32(uint32_t  p_33, union U4  p_34, union U1  p_35, uint64_t  p_36, int32_t  p_37);




static int16_t  func_1(void)
{ 
    union U1 l_6 = {2L};
    int8_t l_20 = 0x6CL;
    g_100 ^= func_2(l_6, (safe_rshift_func_uint16_t_u_u((l_6.f1 , ((g_9 = l_6.f0) , func_10((((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((254UL <= 0xBEL) , 0UL), l_20)), 4294967293UL)) != g_9) , l_6.f0), g_9, g_21, g_21.f0, g_21.f0))), g_21.f0)), l_20);
    return l_20;
}



static int32_t  func_2(union U1  p_3, uint64_t  p_4, uint64_t  p_5)
{ 
    return g_73;
}



static uint16_t  func_10(uint32_t  p_11, int32_t  p_12, union U3  p_13, int64_t  p_14, uint32_t  p_15)
{ 
    union U4 l_38 = {{8UL,0UL,1UL,0x14A9C79EL,0xEF9FL}};
    union U1 l_39 = {0x6BB64548L};
    int32_t l_40 = 0x2F093D7FL;
    int8_t l_77[3];
    int32_t l_98[3][5] = {{(-6L),3L,3L,(-6L),0x355696F0L},{(-6L),3L,3L,(-6L),0x355696F0L},{(-6L),3L,3L,(-6L),0x355696F0L}};
    int16_t l_99 = 0x1992L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_77[i] = 5L;
    g_74 = (safe_lshift_func_uint8_t_u_s((0x3A60813CL | ((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_9, ((safe_mod_func_int64_t_s_s(((func_32(p_11, l_38, l_39, l_38.f0.f0, l_40) , l_40) || l_39.f1), 18446744073709551611UL)) ^ 4294967295UL))), p_13.f0)) == 0xAEL)), 7));
    if (g_21.f0)
    { 
        uint8_t l_80 = 247UL;
        g_81 = ((safe_div_func_uint64_t_u_u((((p_13.f0 ^ (((l_77[1] ^ 0x1437717E41AB8767LL) & (safe_mod_func_uint16_t_u_u((((-10L) | (-7L)) < 4294967289UL), (-8L)))) & l_80)) , (-8L)) >= 0x3025L), l_38.f0.f1)) & 0x82L);
    }
    else
    { 
        ++g_82;
        for (g_9 = 10; (g_9 < (-19)); g_9--)
        { 
            uint32_t l_87[4] = {3UL,3UL,3UL,3UL};
            int i;
            l_87[3] = p_15;
        }
    }
    for (p_15 = 7; (p_15 <= 21); p_15 = safe_add_func_int16_t_s_s(p_15, 1))
    { 
        int64_t l_90 = 0xE9346F960B338564LL;
        l_90 = 0xD8BAA40DL;
        l_98[0][0] &= (safe_mod_func_uint16_t_u_u((p_11 <= ((safe_add_func_int64_t_s_s(g_71.f1, (((((((l_40 = (safe_rshift_func_uint16_t_u_u(((g_97 && g_64) <= g_59[0][1]), 14))) , 0x1DBEEE9A18863885LL) < 0UL) && p_13.f0) > 0UL) > g_82) >= 0xE7L))) && l_40)), l_39.f0));
        return g_82;
    }
    return l_99;
}



static union U4  func_32(uint32_t  p_33, union U4  p_34, union U1  p_35, uint64_t  p_36, int32_t  p_37)
{ 
    union U4 l_41[5][1][3] = {{{{{0UL,0xC151D1A9L,0x2DA3BB1D4416DA84LL,-1L,65526UL}},{{0x2EL,0x55BB5FB4L,18446744073709551615UL,0x1B09C821L,0x997EL}},{{0UL,0xC151D1A9L,0x2DA3BB1D4416DA84LL,-1L,65526UL}}}},{{{{0xB1L,0xB4D2C298L,2UL,0xE320525CL,0UL}},{{0xB1L,0xB4D2C298L,2UL,0xE320525CL,0UL}},{{0xB1L,0xB4D2C298L,2UL,0xE320525CL,0UL}}}},{{{{0UL,0xC151D1A9L,0x2DA3BB1D4416DA84LL,-1L,65526UL}},{{0x2EL,0x55BB5FB4L,18446744073709551615UL,0x1B09C821L,0x997EL}},{{0UL,0xC151D1A9L,0x2DA3BB1D4416DA84LL,-1L,65526UL}}}},{{{{0xB1L,0xB4D2C298L,2UL,0xE320525CL,0UL}},{{0xB1L,0xB4D2C298L,2UL,0xE320525CL,0UL}},{{0xB1L,0xB4D2C298L,2UL,0xE320525CL,0UL}}}},{{{{0UL,0xC151D1A9L,0x2DA3BB1D4416DA84LL,-1L,65526UL}},{{0x2EL,0x55BB5FB4L,18446744073709551615UL,0x1B09C821L,0x997EL}},{{0UL,0xC151D1A9L,0x2DA3BB1D4416DA84LL,-1L,65526UL}}}}};
    int32_t l_50 = 1L;
    int32_t l_52 = 0L;
    int32_t l_53[2][5][5] = {{{(-1L),0x47E08A84L,0x7C038D03L,(-1L),1L},{(-1L),0xDFDEEAF7L,0x28ED3351L,8L,1L},{(-1L),(-1L),0x9B1000BAL,0xDFDEEAF7L,1L},{1L,1L,1L,1L,1L},{0x3ADAB8F5L,8L,0x7338D581L,0x47E08A84L,1L}},{{(-1L),0x47E08A84L,0x7C038D03L,(-1L),1L},{(-1L),0xDFDEEAF7L,0x28ED3351L,8L,1L},{(-1L),(-1L),0x9B1000BAL,0xDFDEEAF7L,1L},{1L,1L,1L,1L,1L},{0x3ADAB8F5L,8L,0x7338D581L,0x47E08A84L,1L}}};
    uint16_t l_63[2];
    int16_t l_72 = (-1L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_63[i] = 0x8AFEL;
    if (((l_41[2][0][0] , (l_53[1][3][3] |= ((l_41[2][0][0].f0.f0 , (safe_sub_func_uint16_t_u_u(((p_34.f0.f0 || (safe_div_func_uint16_t_u_u((l_52 = ((((g_51 = (safe_mul_func_int8_t_s_s(((l_50 = ((safe_mod_func_uint16_t_u_u((p_34.f0.f4 = (g_9 || p_34.f0.f2)), g_9)) > g_21.f0)) ^ l_41[2][0][0].f0.f3), g_9))) == g_9) >= (-5L)) , g_21.f0)), 0x9548L))) & 255UL), l_41[2][0][0].f0.f2))) > g_9))) != p_35.f1))
    { 
        int8_t l_58 = 0x6FL;
        l_53[1][3][3] |= p_35.f0;
        g_59[0][1] = (l_58 = (safe_lshift_func_int8_t_s_s(((((l_41[2][0][0].f0.f0 || 7L) || g_21.f0) != (safe_sub_func_uint16_t_u_u(p_37, 65530UL))) < p_33), 6)));
    }
    else
    { 
        struct S0 l_60[3][1] = {{{0xE2L,0x4DC4505AL,18446744073709551611UL,0xBD26DA61L,0x5F89L}},{{0xE2L,0x4DC4505AL,18446744073709551611UL,0xBD26DA61L,0x5F89L}},{{0xE2L,0x4DC4505AL,18446744073709551611UL,0xBD26DA61L,0x5F89L}}};
        int i, j;
        g_64 = (l_60[0][0] , (g_9 , (((safe_add_func_uint64_t_u_u((0xBFL >= (l_63[0] = l_53[1][3][3])), l_60[0][0].f4)) || 18446744073709551609UL) , 0x76AF746AL)));
    }
    g_73 = (safe_sub_func_int8_t_s_s((248UL & ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(5L, ((g_71 , l_72) <= p_37))), p_34.f0.f2)) >= l_41[2][0][0].f0.f4)), g_21.f0));
    return p_34;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_59[i][j], "g_59[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
