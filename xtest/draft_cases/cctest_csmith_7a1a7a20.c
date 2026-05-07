// SPDX-License-Identifier: MIT
// cctest_csmith_7a1a7a20.c --- cctest case csmith_7a1a7a20 (csmith seed 2048555552)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8e9dc936 */

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

// Options:   -s 2048555552 -o /tmp/csmith_gen_cwixe8cr/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   unsigned f0 : 30;
};

union U1 {
   int64_t  f0;
   uint64_t  f1;
   const uint64_t  f2;
   uint8_t  f3;
   int32_t  f4;
};

union U2 {
   int64_t  f0;
   uint16_t  f1;
   uint16_t  f2;
   int8_t  f3;
   uint8_t  f4;
};

union U3 {
   int8_t * f0;
   int8_t * f1;
};

union U4 {
   int8_t * f0;
   const uint64_t  f1;
   int16_t  f2;
   uint32_t  f3;
   int8_t  f4;
};

union U5 {
   const uint32_t  f0;
};

union U6 {
   uint8_t  f0;
   int32_t  f1;
   const uint64_t  f2;
   int8_t  f3;
};

union U7 {
   uint32_t  f0;
   int32_t  f1;
};

union U8 {
   signed f0 : 7;
   uint32_t  f1;
   const int32_t  f2;
   const int8_t  f3;
   int8_t * f4;
};


static int32_t g_3 = 1L;
static int16_t g_34 = (-3L);
static uint16_t g_41 = 1UL;
static uint16_t *g_64 = &g_41;
static int32_t g_66[4][5][3] = {{{0x6D23037DL,0xD4DCD782L,0x6D23037DL},{0L,0xCC13236CL,0L},{0x6D23037DL,0xD4DCD782L,0x6D23037DL},{0L,0xCC13236CL,0L},{0x6D23037DL,0xD4DCD782L,0x6D23037DL}},{{0L,0xCC13236CL,0L},{0x6D23037DL,0xD4DCD782L,0x6D23037DL},{0L,0xCC13236CL,0L},{0x6D23037DL,0xD4DCD782L,0x6D23037DL},{0L,0xCC13236CL,0L}},{{0x6D23037DL,0xD4DCD782L,0x6D23037DL},{0L,0xCC13236CL,0L},{0x6D23037DL,0xD4DCD782L,0x6D23037DL},{0L,0xCC13236CL,0L},{0x6D23037DL,0xD4DCD782L,0x6D23037DL}},{{0L,0x64BFCE93L,(-4L)},{0L,0x6D23037DL,0L},{(-4L),0x64BFCE93L,(-4L)},{0L,0x6D23037DL,0L},{(-4L),0x64BFCE93L,(-4L)}}};
static int8_t g_68 = 0xBDL;
static union U6 g_71[6][1][3] = {{{{1UL},{1UL},{1UL}}},{{{4UL},{0x8DL},{4UL}}},{{{1UL},{1UL},{1UL}}},{{{4UL},{0x8DL},{4UL}}},{{{1UL},{1UL},{1UL}}},{{{4UL},{0x8DL},{4UL}}}};
static int64_t g_95 = 0xDB7CFF1CC5CA36B4LL;
static union U2 g_96[2] = {{7L},{7L}};
static union U7 g_114[4][6][7] = {{{{1UL},{0UL},{0xAA2C9F03L},{0xAA2C9F03L},{0UL},{1UL},{4UL}},{{0x927B072BL},{0xCA122FC4L},{9UL},{4294967295UL},{4294967288UL},{3UL},{0x4CB066DBL}},{{4294967288UL},{4294967295UL},{0x4FE02E22L},{0x65DD65D9L},{0xFDB04FC3L},{1UL},{0xCA122FC4L}},{{0x65DD65D9L},{0xCA122FC4L},{0x7EB49816L},{1UL},{4294967286UL},{4294967295UL},{0xEA799ADAL}},{{4294967295UL},{0UL},{0x4EC1833BL},{0x11F6BCDCL},{4UL},{0x0766B1C0L},{0x65DD65D9L}},{{1UL},{4294967295UL},{0x4EC1833BL},{9UL},{9UL},{0x4EC1833BL},{4294967295UL}}},{{{0x79CFBC89L},{0xAA2C9F03L},{0x7EB49816L},{4294967292UL},{4294967295UL},{1UL},{4294967295UL}},{{4294967289UL},{4294967289UL},{0x4FE02E22L},{0UL},{3UL},{4294967295UL},{0UL}},{{0UL},{4294967289UL},{9UL},{4294967292UL},{0x4CB066DBL},{4294967295UL},{0x7EB49816L}},{{0x4EC1833BL},{0UL},{0xAA2C9F03L},{9UL},{4294967289UL},{4294967286UL},{4294967288UL}},{{0xAA2C9F03L},{0x4CB066DBL},{0xF3D13389L},{0x11F6BCDCL},{4294967289UL},{4294967289UL},{0x11F6BCDCL}},{{0xCA122FC4L},{0xFDB04FC3L},{0xCA122FC4L},{1UL},{0x4CB066DBL},{0x79CFBC89L},{4294967292UL}}},{{{4294967289UL},{0xF3D13389L},{0UL},{0x65DD65D9L},{3UL},{0xD26467E2L},{4294967289UL}},{{0xEA799ADAL},{1UL},{3UL},{4294967295UL},{4294967295UL},{0x79CFBC89L},{0xA1E5BAC9L}},{{4294967292UL},{0x4EC1833BL},{0UL},{0xAA2C9F03L},{9UL},{4294967289UL},{4294967286UL}},{{0x7EB49816L},{0xD26467E2L},{0xA1E5BAC9L},{3UL},{4UL},{4294967286UL},{4294967286UL}},{{4294967286UL},{0x0766B1C0L},{1UL},{0x0766B1C0L},{4294967286UL},{4294967295UL},{0xA1E5BAC9L}},{{0x4CB066DBL},{4294967295UL},{0UL},{4294967286UL},{0xFDB04FC3L},{4294967295UL},{4294967289UL}}},{{{0xF3D13389L},{0x5FF26AE3L},{4294967286UL},{0xEA799ADAL},{4294967288UL},{1UL},{4294967292UL}},{{0x4CB066DBL},{4294967286UL},{0xD26467E2L},{4294967295UL},{0UL},{0x4EC1833BL},{0x11F6BCDCL}},{{4294967286UL},{4294967295UL},{0xEA799ADAL},{4294967289UL},{1UL},{0x0766B1C0L},{4294967288UL}},{{0x7EB49816L},{4294967295UL},{4294967295UL},{0UL},{4294967295UL},{4294967295UL},{0x7EB49816L}},{{4294967292UL},{4294967286UL},{0UL},{4294967295UL},{1UL},{3UL},{0x4EC1833BL}},{{0x7EB49816L},{4UL},{0xF3D13389L},{0x79CFBC89L},{0UL},{0UL},{0UL}}}};
static union U7 *g_116 = &g_114[2][3][6];
static uint64_t g_129 = 18446744073709551610UL;
static int16_t g_161 = 1L;
static struct S0 g_181[4][7][4] = {{{{24036},{1724},{1724},{24036}},{{1724},{24036},{1724},{1724}},{{24036},{24036},{2171},{24036}},{{24036},{1724},{1724},{24036}},{{1724},{24036},{1724},{1724}},{{24036},{24036},{2171},{24036}},{{24036},{1724},{1724},{24036}}},{{{1724},{24036},{1724},{1724}},{{24036},{24036},{2171},{24036}},{{24036},{1724},{1724},{24036}},{{1724},{24036},{1724},{1724}},{{24036},{24036},{2171},{24036}},{{24036},{1724},{1724},{24036}},{{1724},{24036},{1724},{1724}}},{{{24036},{24036},{2171},{24036}},{{24036},{1724},{1724},{24036}},{{1724},{24036},{1724},{1724}},{{24036},{24036},{2171},{24036}},{{24036},{1724},{1724},{24036}},{{1724},{24036},{1724},{1724}},{{24036},{24036},{2171},{24036}}},{{{24036},{1724},{1724},{24036}},{{1724},{24036},{1724},{1724}},{{24036},{24036},{2171},{24036}},{{24036},{1724},{1724},{24036}},{{1724},{24036},{1724},{1724}},{{24036},{24036},{2171},{24036}},{{24036},{1724},{1724},{24036}}}};
static union U1 g_189 = {-1L};
static union U1 *g_188 = &g_189;
static const int16_t *g_233 = &g_34;
static const int16_t **g_232 = &g_233;
static int32_t *g_239 = &g_66[3][2][1];
static int32_t **g_238 = &g_239;
static int64_t g_278 = (-3L);
static uint64_t g_298 = 18446744073709551614UL;
static int32_t g_310 = 0xA214248CL;
static union U5 g_313 = {18446744073709551615UL};
static int64_t g_324 = 0L;
static union U6 g_397[2][2] = {{{0xC2L},{0xC2L}},{{0xC2L},{0xC2L}}};
static uint8_t g_412[4][3][4] = {{{5UL,5UL,247UL,5UL},{5UL,0x27L,0x27L,5UL},{0x27L,5UL,0x27L,0x27L}},{{5UL,5UL,247UL,5UL},{5UL,0x27L,0x27L,5UL},{0x27L,5UL,0x27L,0x27L}},{{5UL,5UL,247UL,5UL},{5UL,0x27L,0x27L,5UL},{0x27L,5UL,0x27L,0x27L}},{{5UL,5UL,247UL,5UL},{5UL,0x27L,0x27L,5UL},{0x27L,5UL,0x27L,0x27L}}};
static union U4 g_416 = {0};
static union U2 *g_423 = &g_96[1];
static union U8 g_424[2][3][5] = {{{{-3L},{-3L},{0x7EBC46D2L},{1L},{-8L}},{{0x18FB1C91L},{-8L},{1L},{1L},{1L}},{{1L},{0x6FEEA5F8L},{1L},{0x9A0BE3B2L},{-1L}}},{{{1L},{1L},{0x6FEEA5F8L},{0x7EBC46D2L},{-8L}},{{-3L},{0x9A0BE3B2L},{0x9A0BE3B2L},{-3L},{-7L}},{{1L},{-3L},{0x6FEEA5F8L},{-8L},{1L}}}};
static union U6 g_432 = {0xC6L};
static union U6 *g_431 = &g_432;
static union U3 g_436 = {0};



static uint16_t  func_1(void);
static uint16_t  func_12(int8_t * p_13, int32_t * p_14, const int8_t  p_15, union U7  p_16);
static int8_t * func_17(int32_t  p_18, int64_t  p_19, uint16_t  p_20, uint32_t  p_21);
static int64_t  func_28(int32_t  p_29, union U2  p_30, uint16_t  p_31, int32_t * p_32);
static int32_t ** func_45(int8_t  p_46, uint32_t  p_47);
static int32_t  func_48(const int64_t  p_49, int8_t  p_50);
static int8_t  func_51(int8_t * p_52, union U6  p_53, int64_t  p_54, int32_t * p_55);
static int8_t * func_56(const uint16_t * p_57, union U6  p_58, uint16_t * p_59);




static uint16_t  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t *l_4 = &g_3;
    int32_t *l_5[7] = {&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3};
    int32_t l_6 = 0xCA779041L;
    uint16_t l_7[6] = {1UL,0xAAE0L,0xAAE0L,1UL,0xAAE0L,0xAAE0L};
    union U2 l_33[6][4][1] = {{{{0x2811FFBE62699FF9LL}},{{0xF2633933B839BF5BLL}},{{-2L}},{{0xF2633933B839BF5BLL}}},{{{0x2811FFBE62699FF9LL}},{{0xF2633933B839BF5BLL}},{{-2L}},{{0xF2633933B839BF5BLL}}},{{{0x2811FFBE62699FF9LL}},{{0xF2633933B839BF5BLL}},{{-2L}},{{0xF2633933B839BF5BLL}}},{{{0x2811FFBE62699FF9LL}},{{0xF2633933B839BF5BLL}},{{-2L}},{{0xF2633933B839BF5BLL}}},{{{0x2811FFBE62699FF9LL}},{{0xF2633933B839BF5BLL}},{{-2L}},{{0xF2633933B839BF5BLL}}},{{{0x2811FFBE62699FF9LL}},{{0xF2633933B839BF5BLL}},{{-2L}},{{0xF2633933B839BF5BLL}}}};
    uint16_t *l_35 = &l_7[1];
    int64_t *l_323[4];
    union U7 l_329 = {1UL};
    union U6 *l_430 = &g_397[1][1];
    union U6 **l_429[4];
    int32_t * const ** const l_435 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_323[i] = &g_324;
    for (i = 0; i < 4; i++)
        l_429[i] = &l_430;
    l_7[1]--;
    (*l_4) = (safe_sub_func_int8_t_s_s((func_12(func_17((safe_div_func_int64_t_s_s((*l_2), (safe_rshift_func_int8_t_s_s((safe_add_func_int64_t_s_s((((g_324 &= func_28(g_3, l_33[5][3][0], (g_3 >= (--(*l_35))), &l_6)) != ((((*l_2) ^ g_278) , (*l_4)) == 0xDB9BABAEL)) & g_181[1][1][0].f0), 2UL)), 0)))), g_313.f0, (*l_2), g_181[1][1][0].f0), &g_3, g_313.f0, l_329) , (-2L)), g_397[1][1].f0));
    g_423 = &l_33[5][3][0];
    (*l_4) = ((g_424[1][2][2] , (((safe_mul_func_uint16_t_u_u((*g_64), (safe_lshift_func_int16_t_s_u((&g_397[1][1] == (g_431 = &g_71[4][0][2])), 6)))) < (safe_mul_func_uint16_t_u_u(((void*)0 != l_435), (*g_233)))) , g_436)) , (*g_239));
    return (*g_64);
}



static uint16_t  func_12(int8_t * p_13, int32_t * p_14, const int8_t  p_15, union U7  p_16)
{ 
    uint32_t l_347[3];
    uint32_t l_382 = 0x27323745L;
    int32_t l_413 = 0x51075F8EL;
    int32_t **l_418 = (void*)0;
    int i;
    for (i = 0; i < 3; i++)
        l_347[i] = 0x7F3A99EDL;
    if ((*p_14))
    { 
        int8_t l_330 = (-1L);
        union U7 *l_332 = &g_114[2][3][6];
        int8_t l_373 = 0xDDL;
        int32_t l_374 = 0xB3820A8EL;
        int32_t l_375[6] = {(-1L),(-4L),(-4L),(-1L),(-4L),(-4L)};
        uint16_t **l_411 = (void*)0;
        union U1 * const l_414 = &g_189;
        int i;
        for (g_129 = 0; (g_129 <= 3); g_129 += 1)
        { 
            union U7 *l_331[4][5][3] = {{{&g_114[1][1][5],&g_114[1][4][2],&g_114[2][3][6]},{&g_114[2][3][6],&g_114[2][3][6],&g_114[2][3][6]},{&g_114[2][3][6],&g_114[2][3][6],&g_114[1][2][5]},{&g_114[1][1][0],&g_114[0][2][2],&g_114[1][2][6]},{&g_114[2][3][6],&g_114[1][2][6],&g_114[2][2][4]}},{{&g_114[2][3][6],&g_114[2][3][6],&g_114[2][3][6]},{&g_114[1][1][0],&g_114[0][3][3],(void*)0},{&g_114[2][3][6],&g_114[2][3][6],&g_114[2][2][5]},{&g_114[2][3][6],&g_114[1][1][5],&g_114[2][4][1]},{&g_114[1][1][5],(void*)0,&g_114[2][3][6]}},{{&g_114[2][3][6],&g_114[1][1][5],&g_114[0][0][0]},{&g_114[1][4][2],&g_114[2][3][6],&g_114[2][3][6]},{&g_114[2][3][6],&g_114[0][3][3],&g_114[2][3][6]},{(void*)0,&g_114[2][3][6],&g_114[3][5][0]},{&g_114[2][3][6],&g_114[1][2][6],&g_114[3][5][0]}},{{&g_114[2][3][6],&g_114[0][2][2],&g_114[2][3][6]},{&g_114[2][3][6],&g_114[2][3][6],&g_114[2][3][6]},{&g_114[2][2][4],&g_114[2][3][6],&g_114[0][0][0]},{&g_114[1][2][5],&g_114[1][4][2],&g_114[2][3][6]},{&g_114[2][3][6],&g_114[2][3][6],&g_114[2][4][1]}}};
            int32_t l_333 = 0x46247B45L;
            int32_t *l_376 = &l_375[5];
            int32_t *l_377 = &l_333;
            int32_t *l_378 = &l_375[5];
            int32_t *l_379 = &g_66[3][1][0];
            int32_t *l_380 = &g_66[3][3][0];
            int32_t *l_381 = &g_189.f4;
            union U6 *l_396 = &g_397[1][1];
            union U6 **l_395 = &l_396;
            const int32_t *l_409 = &g_3;
            const int32_t * const *l_408[4] = {&l_409,&l_409,&l_409,&l_409};
            const int32_t * const ** const l_407 = &l_408[1];
            const int32_t * const ** const *l_406 = &l_407;
            union U1 l_410 = {3L};
            union U4 *l_415 = &g_416;
            int i, j, k;
        }
        (*p_14) = 0x8365276CL;
    }
    else
    { 
        int32_t *l_419 = &g_71[2][0][1].f1;
        int32_t *l_420 = &g_397[1][1].f1;
        struct S0 *l_422 = &g_181[1][1][0];
        l_413 |= ((**g_238) = (l_418 != l_418));
        if (g_3)
            goto lbl_421;
lbl_421:
        (*g_238) = (*g_238);
        (*l_422) = g_181[3][0][1];
    }
    return (*g_64);
}



static int8_t * func_17(int32_t  p_18, int64_t  p_19, uint16_t  p_20, uint32_t  p_21)
{ 
    int8_t *l_328[1][5];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_328[i][j] = &g_71[2][0][1].f3;
    }
    for (g_189.f0 = (-14); (g_189.f0 < (-14)); g_189.f0 = safe_add_func_int16_t_s_s(g_189.f0, 9))
    { 
        int8_t *l_327[5];
        int i;
        for (i = 0; i < 5; i++)
            l_327[i] = &g_68;
        return l_327[4];
    }
    return l_328[0][0];
}



static int64_t  func_28(int32_t  p_29, union U2  p_30, uint16_t  p_31, int32_t * p_32)
{ 
    uint16_t *l_40 = &g_41;
    int32_t l_44[4] = {0x7E526954L,0x7E526954L,0x7E526954L,0x7E526954L};
    int32_t ***l_314 = &g_238;
    int32_t l_322 = (-7L);
    int i;
    l_44[2] &= (safe_lshift_func_uint16_t_u_u(((*l_40)++), g_3));
    (*l_314) = func_45(g_3, g_3);
    for (p_30.f0 = 0; (p_30.f0 <= 3); p_30.f0 += 1)
    { 
        int i;
        (*p_32) ^= l_44[p_30.f0];
        for (g_68 = 3; (g_68 >= 0); g_68 -= 1)
        { 
            const struct S0 l_320 = {23609};
            const union U4 l_321 = {0};
            for (g_298 = 0; (g_298 <= 3); g_298 += 1)
            { 
                for (g_310 = 3; (g_310 >= 0); g_310 -= 1)
                { 
                    int i;
                    if (l_44[g_68])
                        break;
                }
            }
            if ((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((+((void*)0 == &g_64)), 6)), ((65535UL < ((l_320 , (void*)0) != (l_321 , &g_114[2][1][0]))) >= p_29))))
            { 
                return g_96[1].f2;
            }
            else
            { 
                return l_322;
            }
        }
        return l_44[p_30.f0];
    }
    return p_30.f1;
}



static int32_t ** func_45(int8_t  p_46, uint32_t  p_47)
{ 
    const uint16_t *l_60 = &g_41;
    union U6 l_61 = {248UL};
    uint16_t *l_63 = &g_41;
    uint16_t **l_62[7] = {&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63};
    int8_t *l_70 = &l_61.f3;
    int8_t **l_69 = &l_70;
    int32_t l_72 = (-1L);
    int32_t *l_309 = &g_310;
    int32_t *l_311 = (void*)0;
    int32_t *l_312 = &g_189.f4;
    int i;
    (*l_312) = ((*l_309) ^= func_48(g_3, func_51(((*l_69) = func_56(l_60, l_61, (g_64 = &g_41))), g_71[2][0][1], (l_72 = 0x446CA37EAD942A26LL), &g_3)));
    (*l_309) |= ((g_313 , (*l_312)) >= (0xD6846D41L && 0xE3BCCD2FL));
    return &g_239;
}



static int32_t  func_48(const int64_t  p_49, int8_t  p_50)
{ 
    for (g_41 = 0; (g_41 > 42); g_41 = safe_add_func_int32_t_s_s(g_41, 7))
    { 
        union U1 l_303 = {0L};
        union U6 *l_305 = &g_71[4][0][0];
        union U6 **l_304 = &l_305;
        int32_t *l_306 = &g_189.f4;
        const int16_t *l_307[4];
        int32_t *l_308[7] = {&l_303.f4,&l_303.f4,&l_303.f4,&l_303.f4,&l_303.f4,&l_303.f4,&l_303.f4};
        int i;
        for (i = 0; i < 4; i++)
            l_307[i] = &g_161;
        (*l_304) = (l_303 , &g_71[0][0][1]);
        (*l_306) = (**g_238);
        (*l_306) ^= ((void*)0 == l_307[1]);
        l_308[5] = (void*)0;
        (*l_306) = p_50;
    }
    return (*g_239);
}



static int8_t  func_51(int8_t * p_52, union U6  p_53, int64_t  p_54, int32_t * p_55)
{ 
    uint32_t l_73 = 0x9F019D5CL;
    int64_t *l_94 = &g_95;
    int32_t *l_98 = &g_3;
    int32_t **l_97[1];
    int64_t *l_99 = &g_96[1].f0;
    union U5 l_100 = {0UL};
    const uint16_t *l_102 = &g_96[1].f2;
    const uint16_t **l_101 = &l_102;
    uint8_t l_151[2];
    int32_t l_162 = 0xFE9C12CEL;
    union U7 **l_200 = &g_116;
    int i;
    for (i = 0; i < 1; i++)
        l_97[i] = &l_98;
    for (i = 0; i < 2; i++)
        l_151[i] = 0x39L;
    g_66[3][3][0] = (l_73 ^ (safe_sub_func_int32_t_s_s(((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((((p_53.f0 || (safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((((*l_99) = ((safe_mod_func_int64_t_s_s(((((*l_94) &= (safe_mod_func_int8_t_s_s(g_3, (safe_add_func_int16_t_s_s(0x16A1L, (*g_64)))))) , (g_96[1] , &p_55)) != l_97[0]), g_41)) | 0x54L)) ^ g_3), 7)), 5UL)), (*p_55))) && p_53.f3), g_66[3][3][0]))) , 0L) < 0x14A51E29AFBAE3B8LL), 0x016CL)), g_68)) && g_41), 4294967288UL)));
    g_71[2][0][1].f1 = ((p_53.f0 , l_100) , ((l_100 , l_101) == &g_64));
    if (g_66[3][3][0])
    { 
        int16_t *l_107 = &g_34;
        int32_t l_108[5][7][5] = {{{0xA6CE2C69L,0x835E52A1L,0x30FE8BACL,0x6F097794L,(-1L)},{8L,8L,0xBBA09B98L,5L,0L},{6L,0L,0x30FE8BACL,(-1L),0x71CFEE84L},{0L,0x9839B2FDL,0xF9B9B769L,0xF9B9B769L,0x9839B2FDL},{0L,0x9839B2FDL,0x6F097794L,0xA6CE2C69L,1L},{0x44B85C55L,0L,0x71CFEE84L,8L,0L},{0x30FE8BACL,8L,0x44B85C55L,6L,1L}},{{0x44B85C55L,0x835E52A1L,5L,0L,0x6F097794L},{0L,8L,8L,0L,0x6F097794L},{0L,5L,0x835E52A1L,0x44B85C55L,1L},{6L,(-1L),0x9839B2FDL,0x835E52A1L,0x6F097794L},{0xB33E7469L,0L,0x44B85C55L,(-1L),0L},{0L,8L,0xBBA09B98L,0x0A5FB02CL,0xBBA09B98L},{1L,1L,0xBBA09B98L,0xF9B9B769L,0L}},{{5L,0x835E52A1L,0x44B85C55L,1L,0x0A5FB02CL},{0L,6L,0x9839B2FDL,0xB33E7469L,5L},{8L,0x835E52A1L,8L,0L,0x9839B2FDL},{0x30FE8BACL,1L,0xB33E7469L,1L,0x30FE8BACL},{0x30FE8BACL,8L,0L,5L,1L},{8L,0L,(-1L),0L,0xB33E7469L},{0L,(-1L),0L,8L,1L}},{{5L,0L,8L,0x30FE8BACL,0x30FE8BACL},{1L,0xB33E7469L,1L,0x30FE8BACL,0x9839B2FDL},{0L,8L,0x835E52A1L,8L,5L},{0xB33E7469L,0x9839B2FDL,6L,0L,0x0A5FB02CL},{1L,0x44B85C55L,0x835E52A1L,5L,0L},{0xF9B9B769L,0xBBA09B98L,1L,1L,0xBBA09B98L},{0x0A5FB02CL,0xBBA09B98L,8L,0L,0L}},{{(-1L),0x44B85C55L,0L,0xB33E7469L,0x6F097794L},{0x835E52A1L,0x9839B2FDL,(-1L),1L,0L},{(-1L),8L,0L,0xF9B9B769L,8L},{0x0A5FB02CL,0xB33E7469L,0xB33E7469L,0x0A5FB02CL,8L},{0xF9B9B769L,0L,8L,(-1L),0L},{1L,(-1L),0x9839B2FDL,0x835E52A1L,0x6F097794L},{0xB33E7469L,0L,0x44B85C55L,(-1L),0L}}};
        int32_t l_130[6] = {0x285FA893L,0x285FA893L,0x45D86B46L,0x285FA893L,0x285FA893L,0x45D86B46L};
        uint64_t l_136 = 0x1DA5914D98EA379FLL;
        const union U1 l_168 = {0x299B2AD0072B36A8LL};
        union U7 * const *l_204 = &g_116;
        union U7 * const * const *l_203 = &l_204;
        union U3 l_230 = {0};
        struct S0 l_245 = {6653};
        uint8_t l_268 = 255UL;
        uint32_t l_280[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_280[i] = 0xA0AEBC03L;
        l_108[2][3][2] = (((*g_64) = p_54) || (((void*)0 != (*l_101)) , ((18446744073709551609UL > ((((*l_107) = ((safe_rshift_func_uint16_t_u_u(65531UL, 9)) < (safe_mod_func_int64_t_s_s((-8L), ((*g_64) | (*g_64)))))) > (*g_64)) > p_53.f3)) && 0xC480L)));
        for (p_53.f1 = 0; (p_53.f1 != 11); ++p_53.f1)
        { 
            uint64_t l_131 = 0xE9290BC8DDD0EBFALL;
            const uint16_t **l_146[4] = {&l_102,&l_102,&l_102,&l_102};
            uint32_t *l_147 = &g_114[2][3][6].f0;
            int32_t l_165[2];
            union U5 l_169 = {0x13BC2572L};
            union U7 l_170 = {0UL};
            int i;
            for (i = 0; i < 2; i++)
                l_165[i] = 0xB01993B9L;
            for (p_54 = 28; (p_54 > (-11)); p_54 = safe_sub_func_uint32_t_u_u(p_54, 1))
            { 
                union U7 *l_113 = &g_114[2][3][6];
                union U7 **l_115[7] = {&l_113,&l_113,&l_113,&l_113,&l_113,&l_113,&l_113};
                union U8 l_127 = {0xBB5813BBL};
                uint64_t *l_128 = &g_129;
                int i;
                g_116 = l_113;
                l_130[1] ^= (l_108[2][3][2] = (safe_rshift_func_int16_t_s_u(((((*l_94) = (((safe_mul_func_uint16_t_u_u(p_53.f3, 0xB4BDL)) , (safe_rshift_func_int16_t_s_u(0L, (((*l_128) = (((*l_107) |= (safe_add_func_int32_t_s_s(((p_54 != (safe_rshift_func_uint8_t_u_s(l_108[2][3][2], 0))) >= ((l_127 , g_66[1][4][0]) & g_96[1].f0)), 0x4DD2F3D6L))) ^ l_108[2][3][2])) > 0L)))) > l_127.f0)) != (-4L)) | 0x555199DCL), 13)));
                return (*p_52);
            }
            l_131 = 1L;
            if ((((safe_div_func_int32_t_s_s(0x352CA7B4L, (*p_55))) , l_131) != (((((-8L) ^ (((*l_147) = (safe_mul_func_int16_t_s_s(l_136, ((safe_mod_func_int64_t_s_s((((*p_55) >= (g_66[3][3][0] = ((safe_sub_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u((!((((((safe_mod_func_uint64_t_u_u(0UL, l_136)) , l_146[2]) != l_146[0]) != 1L) > p_54) != (-9L))), (*l_98))) | l_131), p_54)) <= p_54))) && p_53.f3), p_53.f0)) < 0xE32FE6CD9D43CF30LL)))) || (-1L))) > (*p_55)) <= g_96[1].f1) && l_136)))
            { 
                int16_t *l_160 = &g_161;
                int32_t l_164 = 1L;
                uint64_t *l_179 = (void*)0;
                for (g_34 = 1; (g_34 > (-17)); --g_34)
                { 
                    int32_t l_150[6][3] = {{0L,0xD86A01D5L,0L},{0xA67735A7L,0xA67735A7L,1L},{0x50F15932L,0xD86A01D5L,0x50F15932L},{0xA67735A7L,1L,1L},{0L,0xD86A01D5L,0L},{0xA67735A7L,0xA67735A7L,1L}};
                    int i, j;
                    ++l_151[0];
                }
                l_165[0] |= (l_164 &= ((0xF6A14961L ^ (+(p_53.f0 == (((+p_53.f3) || (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((*l_160) = ((*l_107) ^= p_54)), l_162)), p_53.f3))) >= ((((~((0xD3L < g_96[1].f3) , g_68)) , 8UL) & 0x1A7EL) < g_96[1].f1))))) <= (*l_98)));
                for (l_131 = 0; (l_131 == 19); l_131++)
                { 
                    return g_129;
                }
                g_66[0][1][2] = (((l_168 , ((*l_99) |= (l_169 , (l_170 , ((safe_add_func_uint64_t_u_u((g_129 = (l_168.f0 == (safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(((((l_130[1] || ((safe_mod_func_int32_t_s_s(g_41, (-1L))) < (*p_52))) , p_53.f1) > 18446744073709551609UL) & g_71[2][0][1].f0), l_165[1])) <= l_164), 1)))), l_164)) <= p_53.f3))))) | l_164) == (*p_55));
            }
            else
            { 
                struct S0 *l_180 = &g_181[1][1][0];
                struct S0 **l_182 = &l_180;
                if (g_96[1].f3)
                    break;
                (*l_182) = l_180;
            }
        }
        for (p_53.f3 = 12; (p_53.f3 >= (-26)); p_53.f3--)
        { 
            for (g_129 = 0; (g_129 != 9); g_129 = safe_add_func_int64_t_s_s(g_129, 9))
            { 
                int32_t *l_187 = &l_108[4][6][2];
                l_187 = l_187;
                g_188 = (void*)0;
            }
        }
        for (g_161 = 0; (g_161 >= (-20)); g_161--)
        { 
            union U4 l_207 = {0};
            int32_t l_209 = 0x2C927173L;
            union U7 *l_231 = (void*)0;
            struct S0 l_241[2] = {{30412},{30412}};
            uint32_t l_267 = 7UL;
            int32_t l_271 = (-3L);
            int32_t l_272 = 0x9E38342FL;
            int32_t l_274 = 0L;
            int32_t l_276 = 0L;
            int32_t l_277 = 0x90960BBCL;
            int32_t l_279[7][4][2] = {{{(-4L),0x26BE5335L},{0L,0x425CC560L},{0x34B96E32L,0L},{0L,0x1E04204AL}},{{0L,0L},{0x34B96E32L,0x425CC560L},{0L,0x26BE5335L},{(-4L),1L}},{{0x425CC560L,0x7FDA3C6BL},{0x7FDA3C6BL,0x7FDA3C6BL},{0x425CC560L,1L},{(-4L),0x26BE5335L}},{{0L,0x425CC560L},{0x34B96E32L,0L},{0L,0x1E04204AL},{1L,0x1E04204AL}},{{(-4L),0x7FDA3C6BL},{0x1E04204AL,0x34B96E32L},{0L,0x425CC560L},{0x7FDA3C6BL,(-4L)}},{{(-4L),(-4L)},{0x7FDA3C6BL,0x425CC560L},{0L,0x34B96E32L},{0x1E04204AL,0x7FDA3C6BL}},{{(-4L),0x1E04204AL},{1L,(-4L)},{1L,0x1E04204AL},{(-4L),0x7FDA3C6BL}}};
            struct S0 *l_283 = &l_241[0];
            int i, j, k;
            for (p_53.f3 = 0; (p_53.f3 != 11); ++p_53.f3)
            { 
                union U7 ***l_201 = (void*)0;
                union U7 ***l_202 = &l_200;
                union U1 *l_208 = &g_189;
                int32_t l_240 = 9L;
                int32_t l_273 = 0x1DA66102L;
                int32_t l_275[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_275[i] = 2L;
                l_209 = (safe_mul_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s((*p_52), (((((*l_202) = l_200) != (void*)0) | (l_203 == (void*)0)) , (l_168.f4 | ((l_207 , &g_181[1][1][3]) != (void*)0))))) , l_208) != (void*)0), p_53.f3));
            }
            if (l_279[6][0][1])
                continue;
            for (g_189.f4 = 0; (g_189.f4 <= 2); g_189.f4 += 1)
            { 
                return g_96[1].f0;
            }
            (*l_283) = l_245;
        }
    }
    else
    { 
        int32_t l_294 = 0x18072CECL;
        if ((&g_233 == (((safe_mod_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(0x510183994F5809B3LL, (safe_div_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_s(((*p_52) >= (p_53.f0 &= g_278)), (safe_sub_func_int32_t_s_s(l_294, (safe_unary_minus_func_uint64_t_u(p_54)))))) >= (((safe_sub_func_uint16_t_u_u(((*g_64) = (p_54 | (*g_64))), p_54)) < 1L) || 18446744073709551615UL)) < p_54) != 0x941047791FE6ADB9LL) | (**g_238)), g_71[2][0][1].f3)))), (*l_98))) == 4294967295UL) , &g_233)))
        { 
            return (*p_52);
        }
        else
        { 
            (*g_238) = p_55;
        }
    }
    --g_298;
    return (*p_52);
}



static int8_t * func_56(const uint16_t * p_57, union U6  p_58, uint16_t * p_59)
{ 
    int32_t *l_65[1];
    int8_t *l_67 = &g_68;
    int i;
    for (i = 0; i < 1; i++)
        l_65[i] = &g_66[3][3][0];
    g_66[3][3][0] = p_58.f3;
    return l_67;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_66[i][j][k], "g_66[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_68, "g_68", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_71[i][j][k].f0, "g_71[i][j][k].f0", print_hash_value);
                transparent_crc(g_71[i][j][k].f3, "g_71[i][j][k].f3", print_hash_value);

            }
        }
    }
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_96[i].f0, "g_96[i].f0", print_hash_value);
        transparent_crc(g_96[i].f1, "g_96[i].f1", print_hash_value);
        transparent_crc(g_96[i].f2, "g_96[i].f2", print_hash_value);
        transparent_crc(g_96[i].f3, "g_96[i].f3", print_hash_value);
        transparent_crc(g_96[i].f4, "g_96[i].f4", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_114[i][j][k].f0, "g_114[i][j][k].f0", print_hash_value);
                transparent_crc(g_114[i][j][k].f1, "g_114[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_181[i][j][k].f0, "g_181[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_189.f1, "g_189.f1", print_hash_value);
    transparent_crc(g_189.f2, "g_189.f2", print_hash_value);
    transparent_crc(g_189.f3, "g_189.f3", print_hash_value);
    transparent_crc(g_189.f4, "g_189.f4", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_313.f0, "g_313.f0", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_397[i][j].f0, "g_397[i][j].f0", print_hash_value);
            transparent_crc(g_397[i][j].f3, "g_397[i][j].f3", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_412[i][j][k], "g_412[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_424[i][j][k].f0, "g_424[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_432.f0, "g_432.f0", print_hash_value);
    transparent_crc(g_432.f3, "g_432.f3", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
