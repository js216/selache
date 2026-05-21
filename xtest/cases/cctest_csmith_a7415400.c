// SPDX-License-Identifier: MIT
// cctest_csmith_a7415400.c --- cctest case csmith_a7415400 (csmith seed 2806076416)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x208bdfde */

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

// Options:   -s 2806076416 -o /tmp/csmith_gen_ajbd__k4/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int32_t  f1;
   uint64_t  f2;
   int32_t  f3;
   int8_t  f4;
};
#pragma pack(pop)

union U2 {
   struct S0  f0;
   int32_t  f1;
   uint16_t  f2;
};

union U3 {
   uint32_t  f0;
   const uint32_t  f1;
   int8_t  f2;
};

union U4 {
   int16_t  f0;
   uint16_t  f1;
   struct S0  f2;
   uint32_t  f3;
};

union U5 {
   int32_t  f0;
   uint8_t  f1;
};


static uint32_t g_8 = 0x01355FFFL;
static union U4 g_16 = {0xB379L};
static uint8_t g_26[2] = {249UL,249UL};
static int16_t g_64 = 0x0EF1L;
static int8_t g_81 = 0L;
static int64_t g_94[5][4][5] = {{{0x3DA4F77C9A86FCAFLL,0x3DA4F77C9A86FCAFLL,0x219839B2FD4BBA09LL,0x219839B2FD4BBA09LL,0x3DA4F77C9A86FCAFLL},{0x2BD54EFE8F334EEALL,3L,0x2BD54EFE8F334EEALL,3L,0x2BD54EFE8F334EEALL},{0x3DA4F77C9A86FCAFLL,0x219839B2FD4BBA09LL,0x219839B2FD4BBA09LL,0x3DA4F77C9A86FCAFLL,0x3DA4F77C9A86FCAFLL},{0xEE841A119B852D78LL,3L,0xEE841A119B852D78LL,3L,0xEE841A119B852D78LL}},{{0x3DA4F77C9A86FCAFLL,0x3DA4F77C9A86FCAFLL,0x219839B2FD4BBA09LL,0x219839B2FD4BBA09LL,0x3DA4F77C9A86FCAFLL},{0x2BD54EFE8F334EEALL,3L,0x2BD54EFE8F334EEALL,3L,0x2BD54EFE8F334EEALL},{0x3DA4F77C9A86FCAFLL,0x219839B2FD4BBA09LL,0x219839B2FD4BBA09LL,0x3DA4F77C9A86FCAFLL,0x3DA4F77C9A86FCAFLL},{0xEE841A119B852D78LL,3L,0xEE841A119B852D78LL,3L,0xEE841A119B852D78LL}},{{0x3DA4F77C9A86FCAFLL,0x3DA4F77C9A86FCAFLL,0x219839B2FD4BBA09LL,0x219839B2FD4BBA09LL,0x3DA4F77C9A86FCAFLL},{0x2BD54EFE8F334EEALL,3L,0x2BD54EFE8F334EEALL,3L,0x2BD54EFE8F334EEALL},{0x3DA4F77C9A86FCAFLL,0x219839B2FD4BBA09LL,0x219839B2FD4BBA09LL,0x3DA4F77C9A86FCAFLL,0x3DA4F77C9A86FCAFLL},{0xEE841A119B852D78LL,3L,0xEE841A119B852D78LL,3L,0xEE841A119B852D78LL}},{{0x3DA4F77C9A86FCAFLL,0x3DA4F77C9A86FCAFLL,0x219839B2FD4BBA09LL,0x219839B2FD4BBA09LL,0x3DA4F77C9A86FCAFLL},{0x2BD54EFE8F334EEALL,3L,0x2BD54EFE8F334EEALL,3L,0x2BD54EFE8F334EEALL},{0x3DA4F77C9A86FCAFLL,0x219839B2FD4BBA09LL,0x219839B2FD4BBA09LL,0x3DA4F77C9A86FCAFLL,0x3DA4F77C9A86FCAFLL},{0xEE841A119B852D78LL,3L,0xEE841A119B852D78LL,3L,0xEE841A119B852D78LL}},{{0x3DA4F77C9A86FCAFLL,0x3DA4F77C9A86FCAFLL,0x219839B2FD4BBA09LL,0x219839B2FD4BBA09LL,0x3DA4F77C9A86FCAFLL},{0x2BD54EFE8F334EEALL,3L,0x2BD54EFE8F334EEALL,3L,0x2BD54EFE8F334EEALL},{0x3DA4F77C9A86FCAFLL,0x219839B2FD4BBA09LL,0x219839B2FD4BBA09LL,0x3DA4F77C9A86FCAFLL,0x3DA4F77C9A86FCAFLL},{0xEE841A119B852D78LL,3L,0xEE841A119B852D78LL,3L,0xEE841A119B852D78LL}}};
static int64_t g_96 = 8L;
static int16_t g_97 = 0x5FF2L;
static int32_t g_98 = 0x8C96F5F5L;
static int32_t g_99 = 0x2FC4CEA7L;
static int16_t g_115 = 0xE929L;
static uint32_t g_116 = 0xEBFA9BDDL;
static struct S0 g_119 = {18446744073709551615UL,0xCA7B4D5CL,18446744073709551611UL,0x4B05BB3EL,1L};
static int16_t g_210 = 1L;
static int16_t g_273 = 0x3951L;



static struct S0  func_1(void);
static int32_t  func_2(struct S0  p_3);
static struct S0  func_4(uint64_t  p_5, struct S0  p_6, uint16_t  p_7);
static struct S0  func_10(int8_t  p_11, union U4  p_12, uint64_t  p_13, uint16_t  p_14);




static struct S0  func_1(void)
{ 
    uint8_t l_9 = 0x1AL;
    int32_t l_15[4] = {0L,0L,0L,0L};
    int32_t l_17 = 0x7C44D996L;
    const int64_t l_304 = 0xF694FA6B8BF16BD3LL;
    struct S0 l_307 = {0x3B3FE907L,0x7314FEBEL,0UL,0x8AD097FBL,0L};
    struct S0 l_308 = {0xB6152E5FL,1L,1UL,1L,0L};
    int8_t l_311 = 0x02L;
    int i;
    if (func_2(func_4((l_9 = g_8), func_10(l_15[0], g_16, (l_17 = (l_15[2] >= g_8)), g_8), l_15[1])))
    { 
        uint32_t l_293 = 0x13BFD860L;
        int32_t l_294[1];
        int32_t l_306 = 0L;
        int i;
        for (i = 0; i < 1; i++)
            l_294[i] = 0x6E1C3217L;
        l_15[2] = g_116;
        g_16.f2.f1 = ((safe_div_func_uint8_t_u_u(g_115, ((safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(g_26[0], (g_96 == (safe_lshift_func_uint16_t_u_s(((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((~((g_210 = (safe_sub_func_int16_t_s_s((((((safe_add_func_uint8_t_u_u((6L ^ l_15[0]), 0x09L)) < 1UL) == 0x6DCFAA13AD1F110CLL) == g_8) & g_94[2][0][3]), g_8))) || g_64)), g_119.f4)), g_26[0])), 0xF1C5L)) || 0xA6C8DEDF79517D8BLL), 1))))) , l_293), 4)) || g_99))) | g_8);
        for (g_16.f3 = 0; (g_16.f3 <= 1); g_16.f3 += 1)
        { 
            int32_t l_295[3];
            int i;
            for (i = 0; i < 3; i++)
                l_295[i] = 9L;
            l_294[0] = g_26[g_16.f3];
            l_15[0] &= l_293;
            for (g_210 = 0; (g_210 <= 1); g_210 += 1)
            { 
                int32_t l_299[4] = {8L,8L,8L,8L};
                int8_t l_305 = 0x18L;
                int i;
                l_295[0] = g_94[3][0][0];
                l_306 |= (safe_unary_minus_func_uint32_t_u((safe_sub_func_int16_t_s_s(((l_299[3] | 0xAEBCL) <= (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((((g_115 && l_294[0]) >= l_304) != (-2L)), l_305)), 9))), 7UL))));
            }
        }
    }
    else
    { 
        l_308 = (l_307 = l_307);
    }
    for (l_17 = 18; (l_17 > (-17)); l_17--)
    { 
        l_311 &= g_26[0];
    }
    return l_308;
}



static int32_t  func_2(struct S0  p_3)
{ 
    uint16_t l_245 = 6UL;
    int32_t l_248[5];
    int i;
    for (i = 0; i < 5; i++)
        l_248[i] = 0x3E866A5DL;
    l_248[3] = (g_98 = (((((g_94[3][2][3] &= ((p_3.f0 > l_245) != (((((safe_lshift_func_int8_t_s_s((p_3.f4 = g_26[1]), 1)) > ((g_16.f3 > p_3.f0) , 0xAED0E2EEFEA89C39LL)) == p_3.f0) || p_3.f0) && p_3.f0))) < p_3.f3) & 0UL) != l_245) && g_210));
    for (g_16.f0 = 4; (g_16.f0 < 23); g_16.f0 = safe_add_func_int32_t_s_s(g_16.f0, 1))
    { 
        for (g_99 = 0; (g_99 <= 1); g_99 += 1)
        { 
            int32_t l_272 = 0x10234A52L;
            int i;
            l_248[g_99] = ((-1L) & (safe_rshift_func_int8_t_s_u((((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((((((g_26[g_99] <= (((safe_div_func_uint8_t_u_u((0xE9L == ((safe_lshift_func_int8_t_s_u(((l_248[(g_99 + 1)] >= l_248[g_99]) <= 0L), g_96)) & (-9L))), 0x7BL)) == p_3.f0) ^ 0L)) | p_3.f3) & p_3.f0) < l_245) >= p_3.f1), (-6L))), p_3.f3)), 0x9318L)) > 0x2019D5596D2B076ELL) , g_98), 0)));
            for (g_119.f3 = 0; (g_119.f3 <= 1); g_119.f3 += 1)
            { 
                uint64_t l_267 = 0x1255D9042488E89DLL;
                int i, j, k;
                l_248[(g_99 + 1)] = (safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((l_267 = g_94[(g_119.f3 + 1)][(g_119.f3 + 2)][(g_119.f3 + 2)]) && (-1L)), (((l_248[3] & ((((l_272 &= ((p_3.f4 = ((safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_245 < g_119.f2), p_3.f2)), l_248[g_99])) != 0x90L)) & l_248[2])) == 8UL) || 0xEFL) , g_98)) ^ g_119.f2) <= 0UL))), g_64));
            }
        }
        if (l_245)
            break;
    }
    return g_273;
}



static struct S0  func_4(uint64_t  p_5, struct S0  p_6, uint16_t  p_7)
{ 
    union U4 l_61 = {7L};
    uint64_t l_62[2];
    int32_t l_114 = 0L;
    int32_t l_136 = 1L;
    int i;
    for (i = 0; i < 2; i++)
        l_62[i] = 0x802F47D66A4358B9LL;
    for (g_16.f3 = (-19); (g_16.f3 == 30); g_16.f3 = safe_add_func_uint8_t_u_u(g_16.f3, 7))
    { 
        uint32_t l_63 = 1UL;
        int32_t l_79 = 0x417F16C3L;
        struct S0 l_120 = {0x5914D98EL,0x379FF8A6L,18446744073709551609UL,0x580C9BFBL,0x7DL};
        union U3 l_144 = {1UL};
        int16_t l_173 = 7L;
        union U4 l_189 = {0xE180L};
        for (p_6.f1 = (-16); (p_6.f1 >= 12); p_6.f1 = safe_add_func_uint8_t_u_u(p_6.f1, 7))
        { 
            union U3 l_48 = {0x48CA1818L};
            int32_t l_80 = 0L;
            struct S0 l_113 = {0x62F6D3EBL,0xD5AF5334L,0xEAE813F23DC045D8LL,-10L,0L};
            uint32_t l_130 = 0xCEBE310AL;
            if ((safe_div_func_int16_t_s_s((g_64 = (((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u((l_62[1] = (safe_mod_func_int64_t_s_s((l_48 , (safe_mul_func_uint8_t_u_u((l_61.f2.f1 = (func_10((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((0xC8B2L > (0x6CL || g_16.f3)), 5UL)), 6)) , g_16.f1), p_6.f0)), 2)), g_8)), l_61, g_16.f3, l_61.f0) , p_6.f3)), 0x63L))), g_16.f3))), p_6.f0)), 8UL)), 3)), 254UL)), 0UL)), (-7L))) | l_63) < p_6.f3)), p_6.f1)))
            { 
                int64_t l_83 = 0x010D33A1293870B5LL;
                struct S0 l_95[2][3] = {{{1UL,0x68C87B4EL,1UL,0x3B1D7879L,0xFBL},{1UL,0x68C87B4EL,1UL,0x3B1D7879L,0xFBL},{1UL,0x68C87B4EL,1UL,0x3B1D7879L,0xFBL}},{{1UL,0x68C87B4EL,1UL,0x3B1D7879L,0xFBL},{1UL,0x68C87B4EL,1UL,0x3B1D7879L,0xFBL},{1UL,0x68C87B4EL,1UL,0x3B1D7879L,0xFBL}}};
                int i, j;
                g_81 ^= ((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0x8462L, (g_64 = (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(l_48.f1, 2)), (safe_rshift_func_int8_t_s_s((l_63 & ((safe_sub_func_int16_t_s_s((l_80 ^= ((l_79 = 0xBE340CFCE320EC44LL) ^ l_48.f1)), g_16.f1)) >= p_6.f3)), 5))))))), (-7L))) & l_61.f0), l_62[0])) >= p_7);
                g_94[3][0][0] &= ((~l_48.f2) >= (((l_83 >= (safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(l_62[1], ((g_81 = (((safe_add_func_int8_t_s_s((((safe_mod_func_int16_t_s_s((((((((g_16.f3 != l_83) > g_16.f0) && g_64) != 2UL) >= g_26[0]) && 65535UL) ^ g_16.f1), p_5)) | p_6.f2) == 0xF29FL), 0xE5L)) | g_81) < l_63)) == 0xBAL))) <= l_48.f1), p_5)) , (-10L)) & g_26[1]), l_83))) >= p_6.f3) & g_16.f1));
                return l_95[0][1];
            }
            else
            { 
                uint16_t l_100 = 1UL;
                if (g_64)
                    break;
                --l_100;
            }
            if ((((safe_lshift_func_int16_t_s_u(((7UL < (((((g_16.f0 , (0x6DA865B3CABD61F3LL < ((safe_unary_minus_func_uint16_t_u(((l_80 |= (safe_add_func_uint64_t_u_u(g_94[1][1][0], g_26[0]))) == 0L))) ^ g_26[0]))) , 0x5DBDBD1F82652714LL) , p_6.f2) , 0L) == 0L)) ^ 0xF33B6043366FBB58LL), 3)) > g_94[3][0][0]) <= 1L))
            { 
                l_113 = func_10((g_81 = (~(0L && (g_26[0] = (l_80 &= (((g_81 >= (safe_add_func_int32_t_s_s((p_5 == (safe_mul_func_uint8_t_u_u((g_16.f0 >= g_94[3][0][0]), 0x55L))), 3UL))) , p_6.f2) || p_6.f0)))))), g_16, g_94[1][2][3], l_48.f1);
            }
            else
            { 
                const uint16_t l_121 = 0x59B2L;
                int32_t l_131 = 3L;
                --g_116;
                l_120 = g_119;
                l_131 = (l_121 < (safe_add_func_uint16_t_u_u((p_7 ^= (((safe_add_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((0x59DE98D4L != (l_130 <= (g_16.f0 | 0x0B3DL))), 0xD5L)), l_62[1])), g_16.f1)) ^ 1UL) <= 0L)), g_16.f1)));
            }
            for (l_120.f3 = 8; (l_120.f3 >= (-24)); --l_120.f3)
            { 
                l_120.f1 = (safe_mul_func_int8_t_s_s(((p_6.f1 && (++g_26[0])) || (l_136 = p_7)), (9UL != (safe_add_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u(((safe_rshift_func_uint16_t_u_s(l_114, 10)) && l_120.f2))), 1L)))));
                g_119 = (l_144 , g_119);
            }
        }
        for (p_6.f2 = 0; (p_6.f2 <= 3); p_6.f2 += 1)
        { 
            return g_119;
        }
        if (((safe_mul_func_int16_t_s_s(((0xB5F6L || (safe_lshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(((++g_119.f2) ^ l_120.f2), 7)) | (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((safe_mod_func_uint64_t_u_u((l_144 , (safe_sub_func_int8_t_s_s(6L, 0L))), g_96)))), p_6.f4)), l_114))) , 0xAAL), g_119.f4))) & 0x31E0L), p_5)) > 0xF9FCAAD6L))
        { 
            uint8_t l_162 = 248UL;
            uint8_t l_178 = 255UL;
            union U2 l_183 = {{0xDEB179A8L,0x176E3802L,0xFFAFFF13C767B023LL,0x39C74932L,-1L}};
            union U5 l_188 = {0x7E4F7073L};
            l_162 = 0x7EA209B0L;
            if (g_96)
            { 
                int16_t l_169 = 1L;
                const int32_t l_170 = 5L;
                l_120.f1 = (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(0x93L, (l_162 >= (l_169 ^= g_119.f2)))), (p_6.f0 && (-3L)))), l_170));
                if (g_119.f2)
                    break;
                l_120 = func_10((safe_mod_func_int16_t_s_s((l_173 == (l_63 , (safe_mul_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(l_61.f0, 255UL)) < g_115) > g_119.f0), g_94[0][0][4])))), (-1L))), g_16, p_5, l_178);
            }
            else
            { 
                union U4 l_179 = {9L};
                union U4 l_180 = {0x6249L};
                l_61.f2 = ((p_6 = p_6) , func_10(g_99, (l_180 = l_179), l_144.f1, g_81));
                l_61.f2 = func_10((safe_sub_func_int16_t_s_s(((l_183 , (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((l_188 , p_6.f0) || 18446744073709551612UL), g_97)), 0)) , l_61) , l_178)) <= 4294967295UL), p_6.f2)), l_189, g_96, g_119.f4);
                g_119.f1 = p_6.f1;
            }
        }
        else
        { 
            int16_t l_209 = 0xF52CL;
            int32_t l_228 = (-9L);
            const union U4 l_229 = {0xBC6DL};
            for (l_189.f2.f1 = 1; (l_189.f2.f1 >= 0); l_189.f2.f1 -= 1)
            { 
                int32_t l_190 = 1L;
                p_6.f1 = (((g_94[3][0][0] = l_190) < ((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((g_210 = (safe_unary_minus_func_uint32_t_u(((((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(65535UL, ((l_209 &= (0xCD63981B1BC71CFCLL <= (safe_mod_func_int32_t_s_s((!p_6.f4), g_16.f0)))) || p_6.f3))) || 0xB338217DE881EA7ALL), l_136)) >= 65535UL) ^ p_6.f1) & 0xAAF2569BL)))), 7)), l_190)), l_120.f0)), 8)), g_119.f2)) || p_6.f2)) == 0xEC6DFB0B29F1C35ALL);
            }
            if (((safe_mod_func_int8_t_s_s((~((safe_sub_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(g_210, ((g_8 &= g_119.f2) < (safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((l_114 & (((safe_lshift_func_int16_t_s_u(p_5, 13)) , 0x6FL) <= 248UL)) | p_6.f1), 5)), l_209)), l_209))))), 0xD245L)) >= 0xEAL)), p_7)) >= p_7))
            { 
                l_228 = (safe_mul_func_uint16_t_u_u(g_119.f4, g_16.f0));
            }
            else
            { 
                int16_t l_236 = 0x661DL;
                g_119 = func_10((l_229 , (safe_div_func_uint64_t_u_u((g_119.f2 = (l_62[1] ^ (safe_add_func_int8_t_s_s(p_5, (safe_div_func_uint64_t_u_u(l_236, l_229.f1)))))), 0x458D056594540758LL))), l_61, p_5, l_209);
                p_6 = p_6;
            }
            g_98 = ((safe_add_func_uint32_t_u_u(p_6.f0, (safe_rshift_func_int16_t_s_u(0x7C09L, (safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(1L, (8UL ^ l_120.f2))), g_119.f0)))))) > l_63);
        }
    }
    g_16.f2 = func_10(l_114, l_61, (p_5 == (p_6 , l_114)), l_136);
    return g_119;
}



static struct S0  func_10(int8_t  p_11, union U4  p_12, uint64_t  p_13, uint16_t  p_14)
{ 
    uint32_t l_24[4][4][3] = {{{18446744073709551606UL,0x11FFBE62L,0x11FFBE62L},{0xF520A048L,0x3F8DE905L,1UL},{0x87E52695L,18446744073709551606UL,0x11FFBE62L},{6UL,0xFF51885AL,6UL}},{{0x87E52695L,0x11FFBE62L,4UL},{0xF520A048L,0xFF51885AL,1UL},{18446744073709551606UL,18446744073709551606UL,4UL},{6UL,0x3F8DE905L,6UL}},{{18446744073709551606UL,0x11FFBE62L,0x11FFBE62L},{0xF520A048L,0x3F8DE905L,1UL},{0x87E52695L,18446744073709551606UL,0x11FFBE62L},{6UL,0xFF51885AL,6UL}},{{0x87E52695L,0x11FFBE62L,4UL},{0xF520A048L,0xFF51885AL,1UL},{18446744073709551606UL,18446744073709551606UL,4UL},{6UL,0x3F8DE905L,6UL}}};
    int32_t l_25 = (-1L);
    struct S0 l_27 = {0UL,-1L,1UL,-8L,0x12L};
    int i, j, k;
    g_26[0] &= (1UL != (((l_25 &= ((safe_mul_func_uint8_t_u_u(p_11, (((((safe_rshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(g_8, 0x6CL)) < p_14), 7)) | 0x33933B83L) >= g_8) & 0x606DC068L) && l_24[0][0][1]))) < p_14)) > g_16.f1) <= (-1L)));
    return l_27;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
    transparent_crc(g_16.f1, "g_16.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_26[i], "g_26[i]", print_hash_value);

    }
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_94[i][j][k], "g_94[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    transparent_crc(g_119.f1, "g_119.f1", print_hash_value);
    transparent_crc(g_119.f2, "g_119.f2", print_hash_value);
    transparent_crc(g_119.f3, "g_119.f3", print_hash_value);
    transparent_crc(g_119.f4, "g_119.f4", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
