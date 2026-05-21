// SPDX-License-Identifier: MIT
// cctest_csmith_2861fc49.c --- cctest case csmith_2861fc49 (csmith seed 677510217)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcf00d0bd */

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

// Options:   -s 677510217 -o /tmp/csmith_gen_560h5yt1/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   uint16_t  f1;
};
#pragma pack(pop)

union U1 {
   int16_t  f0;
   struct S0  f1;
};


static int32_t g_14 = 0x3061ECE3L;
static int8_t g_34[5][4][6] = {{{0L,0L,0x75L,0x75L,0L,0L},{0x52L,0x7DL,0x75L,0L,0xF8L,0x52L},{0xE5L,0x7DL,0L,0xE5L,0L,0xE5L},{0xE5L,0L,0xE5L,0L,0x7DL,0xE5L}},{{0x52L,0xF8L,0L,0x75L,0x7DL,0x52L},{0L,0L,0x75L,0x75L,0L,0L},{0x52L,0x7DL,0x75L,0L,0xF8L,0x52L},{0xE5L,0x7DL,0L,0xE5L,0x52L,0x71L}},{{0x71L,0x52L,0x71L,1L,0xE5L,0x71L},{(-6L),0L,1L,1L,0xE5L,(-6L)},{1L,0x52L,1L,1L,0x52L,1L},{(-6L),0xE5L,1L,1L,0L,(-6L)}},{{0x71L,0xE5L,1L,0x71L,0x52L,0x71L},{0x71L,0x52L,0x71L,1L,0xE5L,0x71L},{(-6L),0L,1L,1L,0xE5L,(-6L)},{1L,0x52L,1L,1L,0x52L,1L}},{{(-6L),0xE5L,1L,1L,0L,(-6L)},{0x71L,0xE5L,1L,0x71L,0x52L,0x71L},{0x71L,0x52L,0x71L,1L,0xE5L,0x71L},{(-6L),0L,1L,1L,0xE5L,(-6L)}}};
static uint8_t g_49[4][3][2] = {{{255UL,0x32L},{0x67L,255UL},{0x78L,0x78L}},{{0x78L,255UL},{0x67L,0x32L},{255UL,0x32L}},{{0x67L,255UL},{0x78L,0x78L},{0x78L,255UL}},{{0x67L,0x32L},{255UL,0x32L},{0x67L,255UL}}};
static int8_t g_53 = 0xD6L;
static int32_t g_56 = 1L;
static uint8_t g_57[6][2] = {{4UL,4UL},{4UL,4UL},{4UL,4UL},{4UL,4UL},{4UL,4UL},{4UL,4UL}};
static uint8_t g_82[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static const uint8_t g_107[5] = {6UL,6UL,6UL,6UL,6UL};
static uint16_t g_113 = 65527UL;
static uint64_t g_121 = 0x2C0441A9D29CCA17LL;
static int32_t *g_126 = &g_56;
static int32_t **g_125 = &g_126;
static int32_t **g_128 = &g_126;
static uint16_t g_155[2] = {0UL,0UL};
static int8_t *g_171 = &g_53;
static int8_t **g_170[2] = {&g_171,&g_171};
static int16_t g_201 = (-10L);
static uint32_t g_205 = 1UL;
static struct S0 g_221 = {-6L,0UL};
static uint32_t g_222[2] = {0UL,0UL};
static uint16_t g_223 = 65533UL;
static uint32_t g_237 = 4294967291UL;
static uint32_t g_240[4] = {18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL};
static int16_t g_267 = 0xA836L;
static uint64_t *g_270[3][7] = {{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121,&g_121}};
static uint64_t **g_269[7] = {&g_270[1][0],&g_270[1][0],&g_270[1][0],&g_270[1][0],&g_270[1][0],&g_270[1][0],&g_270[1][0]};
static int8_t *g_292[6][3][1] = {{{&g_53},{&g_53},{&g_53}},{{&g_53},{&g_53},{&g_53}},{{&g_53},{&g_53},{&g_53}},{{&g_53},{&g_53},{&g_53}},{{&g_53},{&g_53},{&g_53}},{{&g_53},{&g_53},{&g_53}}};
static int32_t g_293 = 0x4F5D1723L;
static uint32_t g_298 = 4294967293UL;
static int16_t g_300[3][3][4] = {{{0x2C30L,0L,0L,0x2C30L},{0x01E3L,1L,0L,0x3696L},{0x2C30L,(-3L),1L,(-3L)}},{{(-3L),1L,0x09E2L,0x3696L},{0x09E2L,0x3696L,0x83C7L,0x83C7L},{0x01E3L,0x01E3L,1L,0L}},{{0x01E3L,1L,0x83C7L,0x01E3L},{0x09E2L,0L,0x09E2L,0x83C7L},{0x3696L,0L,1L,0x01E3L}}};
static uint64_t g_301 = 0x4903292C47F08E5ELL;
static uint32_t g_325 = 7UL;
static uint8_t g_348 = 0UL;
static int32_t g_368 = 0xD6F66ED1L;
static struct S0 **g_371 = (void*)0;
static struct S0 *g_373 = (void*)0;
static struct S0 **g_372[1] = {&g_373};
static int8_t g_377 = 0x78L;
static int16_t g_383 = 0L;
static uint64_t g_384 = 0x70F5A5815A79CE38LL;
static int32_t g_390 = 0x6FE500F0L;
static uint16_t g_391[6] = {1UL,65535UL,1UL,1UL,65535UL,1UL};
static int16_t *g_452 = &g_300[2][0][2];
static int64_t g_454 = (-1L);
static union U1 g_482 = {0x6AD5L};
static uint64_t g_496 = 0xCB458B8BB48499E5LL;
static uint64_t ***g_507 = &g_269[6];
static uint64_t ****g_506 = &g_507;
static int64_t g_550[4][4][5] = {{{0L,(-1L),0L,(-1L),0L},{0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL},{0L,(-1L),0L,(-1L),0L},{0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL}},{{0L,(-1L),0L,(-1L),0L},{0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL},{0L,(-1L),0L,(-1L),0L},{0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL}},{{0L,(-1L),0L,(-1L),0L},{0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL},{0L,(-1L),0L,(-1L),0L},{0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL}},{{0L,(-1L),0L,(-1L),0L},{0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL},{0L,(-1L),0L,(-1L),0L},{0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL,0x154E5022A367DB90LL}}};
static uint8_t *g_705 = &g_49[2][0][0];
static uint8_t **g_704 = &g_705;
static const int32_t g_707 = (-1L);
static uint16_t g_740 = 0x7D04L;
static int8_t g_751 = 0xADL;
static int64_t g_752 = 0x8783005C1C02FF39LL;
static uint32_t g_753 = 0xB808E65AL;
static struct S0 g_853[1][3][4] = {{{{0xE2L,0x34E3L},{0xE2L,0x34E3L},{0xE2L,0x34E3L},{0xE2L,0x34E3L}},{{0xE2L,0x34E3L},{0xE2L,0x34E3L},{0xE2L,0x34E3L},{0xE2L,0x34E3L}},{{0xE2L,0x34E3L},{0xE2L,0x34E3L},{0xE2L,0x34E3L},{0xE2L,0x34E3L}}}};
static int32_t ***g_868 = &g_128;
static const union U1 ** const *g_898 = (void*)0;
static uint32_t g_961 = 0xD913B354L;
static uint8_t g_976 = 0UL;
static int64_t g_989[4][7][2] = {{{1L,7L},{(-1L),0x9FA54B275F360472LL},{0xA9667D90DBF127FELL,0xB981065D08802646LL},{0xB981065D08802646LL,7L},{0x1E6C19BC9029E083LL,0L},{(-1L),0x1E6C19BC9029E083LL},{0xBC88F27A12A257E1LL,0x6C756B43AD73F126LL}},{{0L,(-3L)},{(-1L),0xBC88F27A12A257E1LL},{(-3L),7L},{0x9FA54B275F360472LL,(-1L)},{0xA9667D90DBF127FELL,(-1L)},{0x9FA54B275F360472LL,7L},{(-3L),0xBC88F27A12A257E1LL}},{{(-1L),(-3L)},{0L,0x6C756B43AD73F126LL},{0xBC88F27A12A257E1LL,0x1E6C19BC9029E083LL},{(-1L),0L},{0x1E6C19BC9029E083LL,7L},{0xB981065D08802646LL,0xB981065D08802646LL},{0xA9667D90DBF127FELL,0x9FA54B275F360472LL}},{{(-1L),7L},{1L,0L},{(-1L),1L},{0L,0x6C756B43AD73F126LL},{0L,1L},{(-1L),0L},{1L,7L}}};
static uint32_t g_990 = 0xE4AD4A99L;
static uint16_t g_1021 = 0x501EL;
static uint32_t g_1026 = 0x7E389755L;
static uint64_t g_1045 = 2UL;
static int64_t g_1086 = 0L;
static int32_t g_1088 = (-7L);
static int32_t g_1090 = 0xEB13CAB7L;
static int16_t g_1091 = 6L;
static int32_t g_1092 = 0x3E9059D5L;
static int8_t g_1093 = 4L;
static int32_t g_1094 = 0x8ACB5B0FL;
static int32_t g_1095 = 0xE8342F3FL;
static int8_t g_1096 = 0x33L;
static int8_t g_1097 = 0xD5L;
static int32_t g_1098 = 0x8B1DA321L;
static int16_t g_1099 = 0x8D88L;
static uint16_t g_1103 = 0UL;
static uint16_t g_1118 = 0xD73AL;
static uint16_t g_1148 = 0x47EFL;
static int64_t g_1160 = 1L;
static int32_t g_1161 = 1L;
static uint32_t g_1162 = 0x8F6DB870L;
static int32_t *g_1170 = &g_368;



static struct S0  func_1(void);
static int64_t  func_8(uint32_t  p_9, int64_t  p_10, int32_t  p_11);
static uint32_t  func_17(uint16_t  p_18);
static uint64_t  func_19(const union U1  p_20);
static union U1  func_21(uint64_t  p_22, int16_t  p_23, uint64_t  p_24);
static const uint32_t  func_25(int32_t  p_26, int8_t  p_27, uint8_t  p_28, int16_t  p_29, const uint8_t  p_30);
static int8_t  func_35(int8_t * p_36, uint16_t  p_37, int8_t  p_38, int8_t * p_39, int8_t * p_40);
static int8_t * func_41(const uint64_t  p_42, int32_t  p_43, uint8_t  p_44);




static struct S0  func_1(void)
{ 
    int8_t l_4 = 0xBCL;
    int8_t *l_33 = &g_34[1][3][2];
    int8_t *l_54 = (void*)0;
    int32_t *l_441[6][3] = {{&g_390,&g_390,&g_56},{&g_14,&g_390,&g_56},{(void*)0,&g_390,(void*)0},{(void*)0,&g_14,&g_390},{(void*)0,&g_390,&g_390},{&g_390,&g_390,&g_56}};
    int16_t l_442 = 0L;
    int32_t l_443 = 6L;
    int8_t l_481 = 0x50L;
    uint64_t l_1024 = 0xBFDEFD2E2C8429EBLL;
    uint64_t *l_1025 = &g_301;
    int32_t l_1044 = (-1L);
    int32_t *l_1072[6];
    int64_t l_1085 = 0xE33C218EBA5894ECLL;
    int8_t l_1117 = 2L;
    int32_t l_1144 = 0x8B071F74L;
    int16_t l_1146[2][5] = {{0x9DA9L,0x9DA9L,0x9DA9L,0x9DA9L,0x9DA9L},{(-9L),(-9L),(-9L),(-9L),(-9L)}};
    uint16_t l_1187 = 0xFA27L;
    uint16_t *l_1188 = (void*)0;
    uint16_t *l_1189[4][5] = {{(void*)0,(void*)0,&g_391[1],&g_391[1],&g_223},{&g_391[1],(void*)0,(void*)0,&g_391[1],(void*)0},{&g_391[1],&g_391[1],&g_155[1],&g_155[1],&g_391[1]},{(void*)0,(void*)0,&g_155[1],&g_391[1],&g_391[1]}};
    uint32_t l_1194[2][2] = {{1UL,1UL},{1UL,1UL}};
    int32_t **l_1195[1];
    int16_t l_1196 = 1L;
    struct S0 l_1197 = {0xA9L,0x98C6L};
    uint16_t l_1198 = 65534UL;
    int32_t l_1199 = (-1L);
    struct S0 l_1202 = {0L,65535UL};
    int i, j;
    for (i = 0; i < 6; i++)
        l_1072[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_1195[i] = &l_1072[0];
    return l_1202;
}



static int64_t  func_8(uint32_t  p_9, int64_t  p_10, int32_t  p_11)
{ 
    int64_t l_1029 = 0x97A596EB290D2A7DLL;
    struct S0 *l_1037 = &g_221;
    union U1 l_1041[2] = {{-1L},{-1L}};
    int i;
    for (g_990 = 0; (g_990 <= 54); g_990 = safe_add_func_uint64_t_u_u(g_990, 9))
    { 
        struct S0 **l_1036 = (void*)0;
        struct S0 *l_1038 = &g_221;
        int32_t l_1039 = 1L;
        int32_t l_1040[3];
        int32_t *l_1042 = &g_14;
        int32_t l_1043 = 0xA8A96CE6L;
        int i;
        for (i = 0; i < 3; i++)
            l_1040[i] = 0x0F8CC12EL;
        if (p_10)
            break;
        l_1043 ^= ((*l_1042) = ((l_1029 | (safe_rshift_func_int8_t_s_s((l_1029 && p_11), (safe_sub_func_int8_t_s_s(p_10, (safe_mul_func_uint16_t_u_u(((l_1037 = (void*)0) != l_1038), (((((l_1040[1] |= l_1039) > p_11) || l_1029) , l_1041[1]) , p_10)))))))) ^ 1UL));
        (*l_1042) = p_10;
    }
    return p_11;
}



static uint32_t  func_17(uint16_t  p_18)
{ 
    uint16_t l_663 = 65531UL;
    int8_t l_671 = 0x53L;
    const uint32_t l_687 = 1UL;
    int32_t l_733 = 6L;
    int32_t l_735 = 8L;
    int32_t l_738 = 4L;
    int64_t l_750 = 0xF904876D5A04B163LL;
    uint16_t *l_758 = &g_740;
    const uint8_t l_770 = 0xBAL;
    int32_t l_805 = 0xF593C16BL;
    union U1 *l_808[1];
    union U1 **l_807[6][5][4] = {{{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],(void*)0,&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]}},{{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],(void*)0,&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]}},{{&l_808[0],&l_808[0],(void*)0,&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]}},{{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],(void*)0,&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],(void*)0,&l_808[0]}},{{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]}},{{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],(void*)0,&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]},{&l_808[0],&l_808[0],(void*)0,&l_808[0]},{&l_808[0],&l_808[0],&l_808[0],&l_808[0]}}};
    union U1 ** const *l_806 = &l_807[3][1][1];
    const struct S0 l_835[5] = {{0xC8L,65528UL},{0xC8L,65528UL},{0xC8L,65528UL},{0xC8L,65528UL},{0xC8L,65528UL}};
    int16_t l_860[7][4][5] = {{{0x079AL,0x78DEL,0x4CDBL,(-1L),(-1L)},{4L,0x8DABL,0x4CDBL,0x6C5BL,(-1L)},{(-1L),0xC79FL,(-1L),(-1L),0xC79FL},{0xF9E5L,(-1L),1L,0x7DCBL,0x4BF6L}},{{0xC7F9L,7L,0xC79FL,0x5252L,0xE835L},{(-1L),1L,1L,4L,0x7C13L},{6L,(-1L),0xC297L,(-1L),0x7FF5L},{4L,0x78DEL,0xA2F1L,7L,0x4BF6L}},{{(-1L),1L,0x4BF6L,0xA2F1L,0x079AL},{1L,0xC297L,0x4CDBL,0xA2F1L,(-1L)},{(-1L),(-1L),0x732DL,7L,0x732DL},{0x976AL,0x976AL,0x9FAAL,(-1L),1L}},{{0x4CDBL,0x4BF6L,0x78DEL,4L,4L},{0L,0xC7F9L,(-1L),0x7DCBL,1L},{(-1L),0x4BF6L,0x976AL,0x4CDBL,4L},{0x1795L,0x976AL,0L,0xC79FL,0x78DEL}},{{0x7DCBL,(-1L),0x7FF5L,0x7C13L,(-1L)},{7L,0xC297L,0x4ECEL,(-1L),(-1L)},{0x9FAAL,1L,1L,0x78DEL,0x78DEL},{0xC7F9L,0x78DEL,0xC7F9L,4L,4L}},{{0xC79FL,(-1L),0x5252L,0x9256L,1L},{(-1L),1L,0x9256L,0xFEC4L,4L},{0x8DABL,4L,0x5252L,1L,1L},{1L,(-1L),0xC7F9L,0x6C5BL,0x732DL}},{{0x4BF6L,0xB142L,1L,0x122CL,(-1L)},{4L,0x7FF5L,0x4ECEL,4L,0x079AL},{4L,1L,0x7FF5L,1L,0x4BF6L},{0x4BF6L,0L,0L,0x4BF6L,0x7FF5L}}};
    uint32_t l_901 = 0UL;
    uint8_t **l_986 = &g_705;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_808[i] = &g_482;
    for (g_56 = 0; (g_56 <= 1); g_56 += 1)
    { 
        int i;
        return g_222[g_56];
    }
lbl_987:
    if (p_18)
    { 
        return g_222[0];
    }
    else
    { 
        uint8_t l_685 = 0UL;
        int32_t *l_689 = &g_390;
        union U1 *l_696 = &g_482;
        union U1 * const l_697 = &g_482;
        int8_t *l_727[5];
        int32_t l_734 = 7L;
        int32_t l_739 = 0x21C7C864L;
        struct S0 *l_743[6] = {&g_221,&g_221,&g_221,&g_221,&g_221,&g_221};
        const int32_t *l_756 = &l_738;
        uint16_t l_762 = 0x0536L;
        uint16_t l_800 = 65528UL;
        uint16_t l_809 = 0xDDC0L;
        uint32_t l_837 = 0x73F1A75BL;
        int i;
        for (i = 0; i < 5; i++)
            l_727[i] = &l_671;
        for (g_301 = 0; (g_301 >= 40); g_301 = safe_add_func_int8_t_s_s(g_301, 1))
        { 
            for (p_18 = 0; p_18 < 3; p_18 += 1)
            {
                for (g_368 = 0; g_368 < 7; g_368 += 1)
                {
                    g_270[p_18][g_368] = &g_301;
                }
            }
            if (l_663)
                continue;
        }
        for (g_482.f1.f0 = 0; (g_482.f1.f0 <= 2); g_482.f1.f0 += 1)
        { 
            int32_t l_686 = 0x67188092L;
            int32_t l_732 = 5L;
            int32_t l_737 = 1L;
            struct S0 l_747 = {-9L,0xC7E1L};
            int32_t *l_761[2];
            int32_t l_858[6][3] = {{0xD9D59887L,0x2312B999L,(-4L)},{0x8D3E140EL,0x85633D2CL,0x8D3E140EL},{0x8D3E140EL,0xD9D59887L,0x85633D2CL},{0xD9D59887L,0x8D3E140EL,0x8D3E140EL},{0x85633D2CL,0x8D3E140EL,(-4L)},{0x2312B999L,0xD9D59887L,0x245C47D4L}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_761[i] = &l_737;
            for (g_390 = 1; (g_390 >= 0); g_390 -= 1)
            { 
                union U1 *l_668 = &g_482;
                int64_t *l_694 = &g_454;
                int64_t *l_695[7][6][6] = {{{&g_550[0][2][2],&g_550[0][2][2],&g_550[1][1][3],&g_550[0][2][2],&g_550[3][3][0],&g_550[1][1][3]},{&g_550[0][2][2],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][3][0],&g_550[0][2][2],&g_550[1][1][3]},{&g_550[3][3][0],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[0][2][2],&g_550[0][2][2],&g_550[1][1][3],&g_550[3][3][0],&g_550[1][1][3]}},{{&g_550[3][3][0],&g_550[0][2][2],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[0][2][2],&g_550[0][2][2],&g_550[1][1][3],&g_550[0][2][2],&g_550[3][3][0],&g_550[1][1][3]},{&g_550[0][2][2],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][3][0],&g_550[0][2][2],&g_550[1][1][3]},{&g_550[3][3][0],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3]}},{{&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[0][2][2],&g_550[0][2][2],&g_550[1][1][3],&g_550[3][3][0],&g_550[1][1][3]},{&g_550[3][3][0],&g_550[0][2][2],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[0][2][2],&g_550[0][2][2],&g_550[1][1][3],&g_550[0][2][2],&g_550[3][3][0],&g_550[1][1][3]},{&g_550[0][2][2],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3]}},{{&g_550[1][1][3],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][3][0],&g_550[0][2][2],&g_550[1][1][3]},{&g_550[3][3][0],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[0][2][2],&g_550[0][2][2],&g_550[1][1][3],&g_550[3][3][0],&g_550[1][1][3]},{&g_550[3][3][0],&g_550[0][2][2],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3]}},{{&g_550[0][2][2],&g_550[0][2][2],&g_550[1][1][3],&g_550[0][2][2],&g_550[3][3][0],&g_550[1][1][3]},{&g_550[0][2][2],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][3][0],&g_550[0][2][2],&g_550[1][1][3]},{&g_550[3][3][0],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[0][2][2],&g_550[0][2][2],&g_550[1][1][3],&g_550[3][3][0],&g_550[1][1][3]}},{{&g_550[3][3][0],&g_550[0][2][2],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[0][2][2],&g_550[0][2][2],&g_550[1][1][3],&g_550[0][2][2],&g_550[3][3][0],&g_550[1][1][3]},{&g_550[0][2][2],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][3][0],&g_550[0][2][2],&g_550[1][1][3]},{&g_550[3][3][0],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3]}},{{&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3],&g_550[0][2][2],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[0][2][2],&g_550[0][2][2],&g_550[1][1][3],&g_550[3][3][0],&g_550[1][1][3]},{&g_550[3][3][0],&g_550[0][2][2],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[1][1][3],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3]},{&g_550[0][2][2],&g_550[0][2][2],&g_550[1][1][3],&g_550[0][2][2],&g_550[3][3][0],&g_550[1][1][3]},{&g_550[0][2][2],&g_550[0][2][2],&g_550[1][3][0],&g_550[1][1][3],&g_550[1][1][3],&g_550[1][1][3]}}};
                int32_t l_698[4];
                uint32_t *l_701 = &g_222[1];
                const int32_t *l_706 = &g_707;
                int32_t *l_708[6][4] = {{&l_698[0],&l_698[0],&l_698[0],&l_698[0]},{&l_698[0],&l_698[0],&l_698[0],&l_698[0]},{&l_698[0],&l_698[0],&l_698[0],&l_698[0]},{&l_698[0],&l_698[0],&l_698[0],&l_698[0]},{&l_698[0],&l_698[0],&l_698[0],&l_698[0]},{&l_698[0],&l_698[0],&l_698[0],&l_698[0]}};
                uint16_t *l_724 = &g_391[1];
                int8_t *l_728[7][2] = {{&g_377,&g_377},{&g_377,&g_377},{&g_377,&g_377},{&g_377,&g_377},{&g_377,&g_377},{&g_377,&g_377},{&g_377,&g_377}};
                int8_t **l_729 = &g_292[2][0][0];
                int16_t *l_730 = &g_300[1][0][3];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_698[i] = 0xAE021EF5L;
                for (p_18 = 0; (p_18 <= 2); p_18 += 1)
                { 
                    int32_t *l_666 = &g_368;
                    int32_t *l_667 = (void*)0;
                    int16_t *l_672 = (void*)0;
                    int16_t *l_673 = &g_300[1][2][3];
                    int16_t *l_674 = &g_383;
                    uint64_t *l_684 = &g_301;
                    uint8_t *l_688 = &g_348;
                    int i, j, k;
                    g_56 |= ((safe_mul_func_int16_t_s_s(((g_293 = ((*l_666) = g_300[g_390][p_18][(g_390 + 2)])) , (((*l_688) = ((g_57[(g_390 + 2)][g_390] &= (((l_668 == (((safe_div_func_int16_t_s_s(((*l_674) = ((*l_673) = l_671)), p_18)) < (safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((g_390 , (safe_unary_minus_func_int32_t_s((((l_684 = (void*)0) == (void*)0) || l_685)))) == 0x4AF2L), 13)), l_686)) & 0x54L), l_686)), l_687))) , &g_482)) && 0x4BL) || (-9L))) , 246UL)) < p_18)), g_53)) <= 0L);
                    (*g_125) = l_689;
                }
                g_56 &= ((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((((****g_506) >= (g_550[0][0][3] = ((*l_694) = p_18))) < 0x4EL), (((((*l_701) = ((l_698[1] ^= (l_696 != l_697)) >= (safe_div_func_int64_t_s_s(((g_53 >= ((void*)0 == (***g_506))) != l_686), p_18)))) != p_18) , 0xCC57L) & 1L))) , 65535UL), 5UL)) == l_686);
                g_56 &= (((void*)0 == g_704) != ((l_706 = (void*)0) == l_701));
                if (((p_18 != (safe_lshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((*l_730) = ((safe_mod_func_int32_t_s_s(((****g_506) , (!((safe_sub_func_uint8_t_u_u((**g_704), (safe_sub_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(g_155[1], ((*l_724)--))) || ((l_727[4] == ((*l_729) = l_728[3][1])) > (((*l_689) > p_18) , p_18))), 1UL)))) , l_671))), (*l_689))) != 4294967294UL)), 65527UL)), p_18)) <= l_686), 5))) <= 0xF0L))
                { 
                    int32_t *l_731 = (void*)0;
                    int32_t l_736 = 0x3D622D70L;
                    if (p_18)
                        break;
                    l_731 = l_731;
                    ++g_740;
                    if (p_18)
                        break;
                }
                else
                { 
                    struct S0 **l_744 = &l_743[3];
                    (*l_744) = l_743[4];
                }
                g_56 ^= ((g_325 = (((g_740 = (safe_add_func_int32_t_s_s(((p_18 , 0xABD5EB6F26B662F5LL) & (l_747 , ((*l_694) |= (safe_div_func_int8_t_s_s(l_687, p_18))))), ((*l_701) &= p_18)))) > l_750) ^ p_18)) | g_391[1]);
                for (l_747.f0 = 0; (l_747.f0 <= 1); l_747.f0 += 1)
                { 
                    const int32_t **l_757 = &l_756;
                    const uint16_t *l_760 = (void*)0;
                    const uint16_t **l_759 = &l_760;
                    ++g_753;
                    (*l_757) = l_756;
                    l_733 = (l_758 == ((*l_759) = (void*)0));
                }
            }
            ++l_762;
            if ((+(((safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((((l_770 , (safe_rshift_func_int8_t_s_s(((safe_div_func_int64_t_s_s(((safe_mod_func_int8_t_s_s(0x81L, (*l_689))) <= (safe_rshift_func_uint16_t_u_s(((((safe_sub_func_int8_t_s_s((-6L), ((safe_div_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((~((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(8UL, (((safe_div_func_uint64_t_u_u(((((safe_mod_func_int8_t_s_s((l_800 || (((((safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s((p_18 ^ 0xC9L), l_805)), p_18)) < p_18) && 0xD7BDL) , (void*)0) == l_806)), p_18)) >= g_56) ^ p_18) > p_18), p_18)) ^ 0UL) < p_18))) < p_18), 4)) == g_221.f0)), l_663)) ^ g_155[1]), (*g_705))), g_221.f0)), 0x969914B8399A6D7ALL)) >= l_733), 254UL)) ^ (*g_705)))) >= (*l_689)) <= g_34[0][2][5]) < p_18), (*l_756)))), l_735)) || p_18), 5))) ^ l_671) > p_18) == 0x6AL), l_735)), l_809)) , p_18) != 0x0E7FFCDA0D2D9510LL)))
            { 
                uint16_t *l_827 = &g_221.f1;
                int32_t l_830 = 0xBED1616AL;
                int16_t *l_831 = &g_300[1][2][3];
                struct S0 l_836 = {0xF4L,0x910AL};
                int32_t l_861 = 0xAC9A3676L;
                uint64_t *****l_880[2][5];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_880[i][j] = &g_506;
                }
                if ((safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s((p_18 , (safe_unary_minus_func_int32_t_s(p_18))), ((safe_mul_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(p_18, (safe_mul_func_uint16_t_u_u(((*l_827) = (--(*l_758))), p_18)))) >= ((*l_831) = (safe_rshift_func_int8_t_s_s(l_830, 0)))), ((safe_mod_func_uint64_t_u_u((((p_18 , l_743[5]) == (void*)0) >= p_18), 1UL)) < l_830))), l_733)) <= 18446744073709551615UL), g_496)) | (*l_689)))), 0L)))
                { 
                    (*g_128) = &l_733;
                }
                else
                { 
                    int32_t *l_834[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_834[i] = &g_56;
                    (*l_689) ^= (-5L);
                    if (p_18)
                        break;
                    (*g_128) = l_834[1];
                }
                l_836 = l_835[1];
                if ((l_837 | ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_750, (*g_705))), (-3L))) , (safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((safe_add_func_uint64_t_u_u(((~(safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(p_18, ((l_735 = (g_853[0][2][1] , ((***g_507) = ((-8L) || p_18)))) && 0UL))) && (**g_128)), 0xEF0BL))) && p_18), p_18)) < g_267) != g_752), p_18)), 65535UL)))))
                { 
                    (*g_125) = (void*)0;
                    if (l_835[1].f0)
                        continue;
                }
                else
                { 
                    uint32_t *l_856[1];
                    int32_t l_857 = 0L;
                    int32_t l_859 = 0xBB65F48FL;
                    uint64_t *****l_879 = (void*)0;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_856[i] = &g_298;
                    (***g_868) = ((--g_222[0]) ^ (((*l_827)++) > (((g_237 = (g_34[0][3][3] == ((safe_sub_func_int32_t_s_s((((g_868 != (void*)0) , ((*l_831) = (safe_div_func_int64_t_s_s(p_18, l_830)))) & (safe_rshift_func_uint16_t_u_u(((p_18 , ((((-6L) != l_857) <= g_390) | (**g_704))) , l_687), 6))), (*l_756))) & p_18))) || g_496) > 4L)));
                    (***g_868) = ((safe_mod_func_int32_t_s_s((l_805 | (safe_mul_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(2UL, p_18)) , l_879) == l_880[0][1]), (safe_unary_minus_func_uint32_t_u((0x7185L && (0xD80EL | (*l_756)))))))), (*g_126))) == 1L);
                }
            }
            else
            { 
                (*l_689) &= 0x42BD374DL;
            }
            for (g_390 = 2; (g_390 >= 0); g_390 -= 1)
            { 
                return g_384;
            }
        }
    }
    for (g_267 = 0; (g_267 == (-30)); g_267--)
    { 
        union U1 ***l_886 = &l_807[3][4][0];
        union U1 ****l_885 = &l_886;
        uint16_t *l_893 = &g_391[5];
        uint64_t l_905 = 0x003915E5722D4C82LL;
        int32_t l_959 = 0xBEEFBC15L;
        int32_t l_960[3][2][2];
        int16_t *l_964 = &l_860[5][2][4];
        uint8_t * const * const l_985 = &g_705;
        struct S0 l_993 = {0x09L,0xF393L};
        const struct S0 *l_1018 = &l_993;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_960[i][j][k] = 3L;
            }
        }
        if (((((g_34[4][2][4] , (!((***g_507) && (((((*l_885) = &l_807[3][1][1]) == (void*)0) > p_18) || (((*l_893) = (((safe_sub_func_uint16_t_u_u(((*l_758)--), ((safe_lshift_func_uint8_t_u_u(0x6BL, 6)) && ((*g_868) == (*g_868))))) > 0x2FFB11A7L) ^ (****g_506))) ^ p_18))))) | l_663) | 0x97B4CD4FL) | g_240[1]))
        { 
            int32_t l_904 = 8L;
            int32_t *l_906 = &g_56;
            (*l_906) &= ((((((*g_705) , ((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s(3UL, (((*l_885) = &l_807[0][3][1]) != g_898))) | (safe_mul_func_int8_t_s_s((((g_201 &= (((l_901 , 0x03A9L) < (safe_lshift_func_uint8_t_u_s((p_18 | l_904), l_835[1].f1))) , l_671)) != l_905) , l_735), 0xC0L))), l_671)) != 4294967289UL)) != p_18) , l_904) ^ 0x2339L) && p_18);
            return g_853[0][2][1].f0;
        }
        else
        { 
            (*g_373) = l_835[1];
        }
        for (g_377 = 0; (g_377 != (-11)); g_377--)
        { 
            int32_t l_914[6][2] = {{1L,(-9L)},{0x52E3F57CL,(-9L)},{1L,0x52E3F57CL},{0xF8911588L,0xF8911588L},{0xF8911588L,0x52E3F57CL},{1L,(-9L)}};
            int8_t **l_915 = (void*)0;
            uint8_t *l_916[2][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_57[5][0],&g_82[2],&g_57[5][0],&g_82[2],&g_57[5][0]}}};
            int32_t *l_921[7] = {&g_390,&g_14,&g_14,&g_390,&g_14,&g_14,&g_390};
            int i, j, k;
            g_390 &= (safe_add_func_int16_t_s_s((-1L), (safe_add_func_uint16_t_u_u((~(l_914[0][1] , ((void*)0 == l_915))), (l_916[1][0][3] != ((safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(0UL, (((l_733 = (l_905 == 0xA9L)) | 0xAD23473CL) || 7L))) & p_18), l_905)) , (*g_704)))))));
            if (p_18)
                continue;
        }
        for (g_121 = 0; (g_121 <= 3); g_121 += 1)
        { 
            int16_t l_930[6][6] = {{0xDE3FL,0x8E04L,0x8E04L,0xDE3FL,0x964BL,0xDE3FL},{0xDE3FL,0x964BL,0xDE3FL,0x8E04L,0x8E04L,0xDE3FL},{0x61C3L,0x61C3L,0x8E04L,2L,0x8E04L,0x61C3L},{0x8E04L,0x964BL,2L,2L,0x964BL,0x8E04L},{0x61C3L,0x8E04L,2L,0x8E04L,0x61C3L,0x61C3L},{0xDE3FL,0x8E04L,0x8E04L,0xDE3FL,0x964BL,0xDE3FL}};
            union U1 *** const *l_950[5][5][3] = {{{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886}},{{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886},{&l_886,(void*)0,&l_886},{&l_886,&l_886,&l_886}},{{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886}},{{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886},{&l_886,(void*)0,&l_886}},{{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886},{&l_886,&l_886,&l_886}}};
            int32_t l_954 = 0x0AF824F6L;
            int32_t l_955 = 0xA1E37E79L;
            int32_t l_956 = 0x3666D187L;
            uint64_t **l_970 = &g_270[0][3];
            int32_t l_975 = 0x1BD1C3E6L;
            int i, j, k;
            for (g_348 = 0; (g_348 <= 0); g_348 += 1)
            { 
                uint64_t *l_929[7][2][2] = {{{(void*)0,&g_384},{(void*)0,&l_905}},{{(void*)0,(void*)0},{&l_905,(void*)0}},{{(void*)0,&l_905},{(void*)0,(void*)0}},{{&l_905,(void*)0},{(void*)0,&l_905}},{{(void*)0,(void*)0},{&l_905,(void*)0}},{{(void*)0,&l_905},{(void*)0,(void*)0}},{{&l_905,(void*)0},{(void*)0,&l_905}}};
                const int64_t l_932 = (-1L);
                int8_t *l_933 = (void*)0;
                int8_t *l_934 = &g_221.f0;
                int16_t *l_935[7] = {&g_482.f0,&g_482.f0,&g_300[1][2][3],&g_482.f0,&g_482.f0,&g_300[1][2][3],&g_482.f0};
                int32_t *l_936[5];
                int32_t l_953 = 9L;
                struct S0 l_957 = {0xF5L,6UL};
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_936[i] = &g_390;
                g_390 &= (safe_rshift_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((l_733 ^= (safe_add_func_uint16_t_u_u(0xA04DL, (((g_898 != (void*)0) , ((safe_unary_minus_func_uint32_t_u((g_298 = (((l_930[1][5] = 8UL) <= (+l_671)) ^ p_18)))) < ((*l_934) = ((l_932 || g_740) & 0xE3E1L)))) , p_18)))), l_905)) , &l_807[0][2][0]) != g_898), p_18));
                l_956 = ((l_805 = (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((l_663 || (l_955 ^= (safe_mod_func_uint64_t_u_u((l_954 = ((g_155[g_348] = ((safe_mul_func_uint16_t_u_u(g_301, ((safe_rshift_func_int16_t_s_s(0x8011L, (safe_add_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u((&l_806 != l_950[2][2][0]), ((safe_div_func_uint16_t_u_u((p_18 == (l_835[1].f1 || (-3L))), l_905)) >= (-5L)))) && l_953) > p_18), p_18)))) >= 0UL))) | l_733)) , l_930[3][3])), g_113)))))), p_18))) >= p_18);
                for (g_368 = 0; (g_368 >= 0); g_368 -= 1)
                { 
                    int32_t l_958 = 1L;
                    const uint64_t ***l_965 = (void*)0;
                    int i;
                    (*g_373) = l_957;
                    g_961++;
                    (*g_373) = (((*g_506) != ((l_964 != &l_860[3][3][0]) , l_965)) , (*g_373));
                    if (l_955)
                        continue;
                }
                for (p_18 = 0; (p_18 <= 3); p_18 += 1)
                { 
                    struct S0 *l_966 = &g_853[0][1][0];
                    struct S0 *l_967 = &g_482.f1;
                    (**g_868) = &l_954;
                    (*l_967) = ((*l_966) = ((*g_373) = l_957));
                    (*g_373) = (*l_967);
                }
                if (l_960[2][1][1])
                    break;
            }
            if ((l_738 = (p_18 <= ((safe_rshift_func_int8_t_s_u((l_954 ^ ((((**g_506) = l_970) == l_970) < (4294967290UL & p_18))), 3)) & (safe_mul_func_uint8_t_u_u(0xAAL, 250UL))))))
            { 
                l_955 = 0L;
                if (p_18)
                    continue;
            }
            else
            { 
                int32_t *l_973 = &l_959;
                int32_t *l_974[6] = {&l_735,&l_735,&l_735,&l_735,&l_735,&l_735};
                const struct S0 l_1008 = {0x6BL,65528UL};
                int i;
                ++g_976;
                if ((((safe_lshift_func_uint8_t_u_s((l_960[2][1][0] ^= (*g_705)), p_18)) > ((p_18 < (-2L)) != (safe_mul_func_int16_t_s_s(((((((*l_973) = 0L) > g_853[0][2][1].f0) , (g_49[2][0][0] , l_985)) == l_986) < (**g_704)), p_18)))) ^ p_18))
                { 
                    if (l_805)
                        goto lbl_987;
                }
                else
                { 
                    int32_t l_988 = (-1L);
                    struct S0 l_994[6] = {{-5L,65535UL},{-5L,65535UL},{-5L,65535UL},{-5L,65535UL},{-5L,65535UL},{-5L,65535UL}};
                    union U1 l_1013 = {0xCE89L};
                    int i;
                    ++g_990;
                    l_994[3] = l_993;
                    l_960[1][1][1] = ((safe_rshift_func_uint8_t_u_u(((-1L) == ((((safe_add_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint32_t_u((((**l_885) = &l_808[0]) != (void*)0))), 0)) > 9L) | p_18), (**g_704))) , ((safe_mod_func_int64_t_s_s((0L > (**g_704)), p_18)) < l_663)) <= p_18) & p_18)), 3)) < l_835[1].f1);
                    (*l_973) = ((l_738 = (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((l_1008 , (*g_705)), (safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((*l_964) |= (p_18 , 6L)), (&l_994[2] == ((l_1013 = g_482) , (((l_1013.f0 , g_740) & l_687) , &l_994[5]))))), g_390)))), p_18))) || p_18);
                }
            }
        }
        for (l_959 = (-24); (l_959 <= (-17)); l_959++)
        { 
            const struct S0 *l_1017 = &l_835[1];
            const struct S0 **l_1016[5] = {&l_1017,&l_1017,&l_1017,&l_1017,&l_1017};
            int32_t l_1019[7][6] = {{0x524D1C9EL,1L,1L,1L,1L,0x524D1C9EL},{0L,0x524D1C9EL,1L,0x524D1C9EL,0L,0L},{(-5L),0x524D1C9EL,0x524D1C9EL,(-5L),1L,(-5L)},{(-5L),1L,(-5L),0x524D1C9EL,0x524D1C9EL,(-5L)},{0L,0L,0x524D1C9EL,1L,0x524D1C9EL,0L},{0x524D1C9EL,1L,1L,1L,1L,0x524D1C9EL},{0L,0x524D1C9EL,1L,0x524D1C9EL,0L,0L}};
            int32_t *l_1020[6][3][1] = {{{(void*)0},{&l_960[2][1][1]},{(void*)0}},{{&l_960[2][1][0]},{(void*)0},{&l_960[2][1][1]}},{{(void*)0},{&l_960[2][1][0]},{(void*)0}},{{&l_960[2][1][1]},{(void*)0},{&l_960[2][1][0]}},{{(void*)0},{&l_960[2][1][1]},{(void*)0}},{{&l_960[2][1][0]},{(void*)0},{&l_960[2][1][1]}}};
            int i, j, k;
            l_1018 = &l_835[4];
            g_1021--;
        }
    }
    return g_34[1][0][2];
}



static uint64_t  func_19(const union U1  p_20)
{ 
    struct S0 * const l_483[6] = {&g_221,&g_221,&g_221,&g_221,&g_221,&g_221};
    struct S0 **l_484[3];
    struct S0 **l_485 = &g_373;
    int32_t l_486[6][2][1] = {{{0x3F853FABL},{0xDE2EE8E1L}},{{0x2974B4F0L},{0xDE2EE8E1L}},{{0x3F853FABL},{0x3A77E884L}},{{0x3F853FABL},{0xDE2EE8E1L}},{{0x2974B4F0L},{0xDE2EE8E1L}},{{0x3F853FABL},{0x3A77E884L}}};
    int32_t *l_487 = &l_486[4][0][0];
    int32_t *l_488 = (void*)0;
    int32_t *l_489 = (void*)0;
    int32_t *l_490 = &l_486[3][1][0];
    int32_t *l_491 = &g_56;
    int32_t *l_492 = &l_486[3][1][0];
    int32_t *l_493 = &l_486[3][1][0];
    int32_t *l_494 = &l_486[3][1][0];
    int32_t *l_495[7][6][4] = {{{&g_14,&g_14,&l_486[3][1][0],&g_390},{&g_14,&l_486[3][1][0],&g_390,&g_14},{(void*)0,&l_486[3][1][0],&g_56,&g_390},{&g_390,&l_486[3][1][0],(void*)0,&g_14},{&l_486[3][1][0],&l_486[3][1][0],&g_56,&g_390},{&l_486[1][1][0],&g_14,(void*)0,&l_486[3][1][0]}},{{(void*)0,&l_486[3][1][0],&g_14,(void*)0},{&g_390,&l_486[2][0][0],&g_56,&g_390},{(void*)0,&g_14,&l_486[3][1][0],&g_390},{&g_390,&g_14,(void*)0,&g_14},{&l_486[3][1][0],(void*)0,&g_390,&g_390},{&g_14,&g_14,&g_390,&g_56}},{{&g_14,&l_486[3][1][0],(void*)0,&l_486[4][1][0]},{&g_14,&g_390,&g_390,&g_390},{&g_14,&l_486[4][1][0],&g_390,&l_486[2][0][0]},{&l_486[3][1][0],&l_486[3][1][0],(void*)0,&g_390},{&l_486[3][1][0],&l_486[3][1][0],(void*)0,(void*)0},{&l_486[3][1][0],(void*)0,(void*)0,&g_390}},{{&l_486[2][0][0],&g_390,(void*)0,(void*)0},{&g_390,&l_486[3][1][0],&l_486[3][1][0],&g_390},{&g_390,(void*)0,(void*)0,(void*)0},{&l_486[1][1][0],&g_56,&l_486[4][1][0],(void*)0},{&l_486[3][1][0],&g_390,&l_486[2][0][0],(void*)0},{&l_486[3][1][0],&g_56,&l_486[3][1][0],(void*)0}},{{&l_486[3][1][0],(void*)0,&l_486[3][1][0],&g_390},{&g_390,&l_486[3][1][0],&g_14,(void*)0},{&l_486[3][1][0],&g_390,&g_390,&g_390},{&l_486[3][1][0],(void*)0,&g_14,(void*)0},{&g_56,&l_486[3][1][0],&l_486[2][0][0],&g_390},{(void*)0,&l_486[1][1][0],(void*)0,&g_56}},{{&l_486[1][1][0],(void*)0,&g_14,&l_486[2][0][0]},{&l_486[2][0][0],&l_486[3][1][0],&l_486[3][1][0],(void*)0},{(void*)0,&g_56,&l_486[3][1][0],(void*)0},{&l_486[2][0][0],(void*)0,&g_14,&l_486[3][1][0]},{&l_486[1][1][0],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_486[2][0][0],&g_390}},{{&g_56,&g_56,&g_14,&l_486[3][1][0]},{&l_486[3][1][0],&g_56,&g_390,&g_390},{&l_486[3][1][0],&g_56,&g_14,&g_14},{&g_390,&g_390,&l_486[3][1][0],&l_486[2][0][0]},{&l_486[3][1][0],&g_14,&l_486[3][1][0],(void*)0},{&l_486[3][1][0],&l_486[1][1][0],&l_486[2][0][0],&l_486[3][1][0]}}};
    const int8_t *l_500[2];
    const int8_t **l_499 = &l_500[1];
    int32_t l_501 = 0xD6E18F93L;
    int8_t *l_592 = &g_221.f0;
    int32_t * const l_619[5] = {&g_293,&g_293,&g_293,&g_293,&g_293};
    int8_t l_628 = 0x03L;
    uint32_t l_629 = 18446744073709551606UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_484[i] = &g_373;
    for (i = 0; i < 2; i++)
        l_500[i] = (void*)0;
    (*l_485) = l_483[5];
    (*g_373) = (*g_373);
    g_496++;
    if (((void*)0 == l_499))
    { 
        int32_t l_509 = 0x75477B6FL;
        struct S0 l_556 = {-5L,0x1869L};
lbl_552:
        l_501 = p_20.f0;
        for (g_53 = 18; (g_53 > (-25)); g_53 = safe_sub_func_int64_t_s_s(g_53, 6))
        { 
            uint64_t ** const **l_505 = (void*)0;
            uint64_t ** const ***l_504 = &l_505;
            uint64_t *****l_508 = &g_506;
            int8_t *l_512 = &g_34[1][3][2];
            int32_t l_513 = 1L;
            int32_t l_551[1][5][4] = {{{0x9A32B621L,3L,0x9A32B621L,3L},{0x9A32B621L,3L,0x9A32B621L,3L},{0x9A32B621L,3L,0x9A32B621L,3L},{0x9A32B621L,3L,0x9A32B621L,3L},{0x9A32B621L,3L,0x9A32B621L,3L}}};
            uint32_t l_562 = 0x2C26A492L;
            int i, j, k;
            (*l_491) &= ((*l_494) = (((p_20.f0 > (p_20.f0 & (l_509 = (((*l_504) = (void*)0) != ((*l_508) = g_506))))) <= ((4294967295UL == p_20.f0) <= (safe_lshift_func_int8_t_s_u(((*l_512) &= 0x7FL), g_391[1])))) , l_513));
            if (((*l_492) |= (safe_mod_func_uint32_t_u_u(g_390, ((safe_sub_func_uint16_t_u_u((&l_505 != &g_506), ((((p_20.f0 != (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(p_20.f0, p_20.f0)), 1)), 11)), (g_57[1][0] >= 0UL)))) < g_49[2][0][0]) , p_20.f0) , 0x7F14L))) ^ l_513)))))
            { 
                int64_t l_549 = 0x16AD97467B3FC340LL;
                for (g_113 = 0; (g_113 > 32); ++g_113)
                { 
                    uint32_t *l_530 = &g_222[1];
                    uint32_t *l_536[3][4][2] = {{{&g_325,&g_325},{&g_325,&g_325},{&g_325,&g_325},{&g_325,&g_325}},{{&g_325,&g_325},{&g_325,&g_325},{&g_325,&g_325},{&g_325,&g_325}},{{&g_325,&g_325},{&g_325,&g_325},{&g_325,&g_325},{&g_325,&g_325}}};
                    uint16_t *l_545 = &g_482.f1.f1;
                    const int32_t l_547 = (-10L);
                    int32_t *l_548[1][7];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_548[i][j] = &g_293;
                    }
                    l_551[0][1][3] ^= ((safe_mod_func_uint64_t_u_u(((****g_506) = (((l_549 = (((*l_530)--) == (((((~(l_509 = (p_20.f0 > (((!(!((*l_493) = p_20.f0))) < (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((*l_545) = (0x597304963CD5853CLL & (safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u(l_513, (-1L))), (****g_506))))) != ((safe_unary_minus_func_int8_t_s(4L)) , l_509)), p_20.f0)), 0x7DA3L))) & l_547)))) , p_20.f0) >= p_20.f0) , 0x939F186FL) < 0xB5BDD8C9L))) , l_549) && 0x6A5043BDL)), p_20.f0)) > g_550[1][1][3]);
                    if (g_53)
                        goto lbl_552;
                    (*l_487) = (l_513 = (-6L));
                }
            }
            else
            { 
                for (g_205 = 0; (g_205 > 38); g_205 = safe_add_func_int8_t_s_s(g_205, 7))
                { 
                    struct S0 l_555 = {0L,0xCE2CL};
                    l_556 = l_555;
                    return l_513;
                }
                for (g_496 = (-15); (g_496 > 54); g_496 = safe_add_func_uint32_t_u_u(g_496, 3))
                { 
                    struct S0 ***l_559 = &l_484[1];
                    struct S0 ***l_560[3][7] = {{&l_485,&g_372[0],&l_485,&g_372[0],&l_485,&g_372[0],&l_485},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_485,&g_372[0],&l_485,&g_372[0],&l_485,&g_372[0],&l_485}};
                    int32_t l_561 = 0x34CB3948L;
                    int i, j;
                    (*g_125) = &l_501;
                    (*l_494) = ((((*l_559) = &g_373) == (g_371 = &g_373)) & l_561);
                }
                return l_562;
            }
        }
    }
    else
    { 
        const int8_t **l_575[3];
        int32_t l_610 = 0L;
        int32_t l_623 = 6L;
        int32_t l_626 = 3L;
        uint8_t * const l_636 = (void*)0;
        int i;
        for (i = 0; i < 3; i++)
            l_575[i] = (void*)0;
        for (g_482.f1.f1 = 0; (g_482.f1.f1 > 26); g_482.f1.f1 = safe_add_func_uint64_t_u_u(g_482.f1.f1, 6))
        { 
            uint16_t *l_565 = (void*)0;
            uint16_t *l_566 = (void*)0;
            uint16_t *l_567 = &g_155[1];
            int16_t *l_572 = &g_300[1][2][2];
            int32_t ***l_586 = &g_125;
            const uint64_t l_587 = 18446744073709551615UL;
            int32_t *l_588 = &g_293;
            int32_t l_589[5][2] = {{0xD9BDBF61L,0xAD74E896L},{0xD9BDBF61L,0xD9BDBF61L},{0xAD74E896L,0xD9BDBF61L},{0xD9BDBF61L,0xAD74E896L},{0xD9BDBF61L,0xD9BDBF61L}};
            int8_t *l_593 = &g_221.f0;
            uint32_t *l_613[2];
            int32_t l_614 = 0xFF172123L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_613[i] = (void*)0;
            (*l_492) = ((((*l_567)++) , ((*l_588) |= (safe_lshift_func_int16_t_s_u(((*l_572) = g_390), (g_222[0] > (safe_mod_func_int8_t_s_s((l_575[0] == ((safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((--(***g_507)) , ((***g_507) = (safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((p_20.f0 && p_20.f0) , (((*l_586) = &g_126) == &g_126)), 0x27DC054AL)), 4)))) , 4294967293UL), 0x1A318F5FL)), l_587)) , (void*)0)), g_221.f0))))))) , (*l_492));
            (*l_491) &= (l_589[4][1] < ((g_223 | ((l_614 = (safe_sub_func_int64_t_s_s(((*l_499) == (l_593 = l_592)), (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((((((((safe_div_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s((safe_add_func_int8_t_s_s(((((*l_572) &= 0x7480L) < ((safe_mod_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((l_610 , (safe_lshift_func_uint16_t_u_s(g_205, l_610))), p_20.f0)) == p_20.f0), 0x46881F55L)) < p_20.f0)) > l_589[4][1]), 0xD8L)), p_20.f0)) < l_610) || 65535UL), (-1L))) <= 1UL) , 65527UL) > g_222[1]) , 0xBA1ADC72A05EC46FLL) <= p_20.f0) && p_20.f0), g_383)), (*l_492))), 4))))) >= 0xBD2942C8L)) ^ p_20.f0));
            return p_20.f0;
        }
        for (g_384 = 0; (g_384 == 49); ++g_384)
        { 
            uint64_t *l_625[3];
            int32_t l_627[7][3] = {{0x5E6EF19FL,(-1L),(-6L)},{0x7165C762L,0x7165C762L,0L},{(-6L),4L,4L},{(-6L),0x7165C762L,5L},{(-6L),0x5E6EF19FL,(-6L)},{0L,(-6L),5L},{(-1L),(-1L),4L}};
            uint8_t *l_635 = &g_57[1][1];
            uint8_t **l_634 = &l_635;
            uint16_t l_659[2];
            int i, j;
            for (i = 0; i < 3; i++)
                l_625[i] = &g_301;
            for (i = 0; i < 2; i++)
                l_659[i] = 0UL;
            if (((safe_div_func_uint64_t_u_u((l_619[2] == (void*)0), (((+((((*l_634) = func_41((***g_507), ((*l_487) = ((safe_rshift_func_uint8_t_u_u((((l_623 , (!(--l_629))) , (safe_sub_func_int32_t_s_s((l_627[1][2] ^= 1L), (((l_623 || (*l_494)) || p_20.f0) == g_34[1][1][0])))) , p_20.f0), 7)) , p_20.f0)), g_201)) != l_636) , p_20.f0)) | p_20.f0) | (-1L)))) >= g_300[1][2][3]))
            { 
                for (l_629 = 20; (l_629 != 19); --l_629)
                { 
                    struct S0 l_645 = {1L,0x5A68L};
                    uint16_t l_660 = 0x1833L;
                    if (p_20.f0)
                        break;
                    (*l_490) &= (((safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s(((l_623 |= (safe_mod_func_uint64_t_u_u(0UL, l_627[6][2]))) == (((l_645 , 0UL) | ((((safe_mod_func_uint16_t_u_u(((g_155[1] = (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(g_348, (safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(l_645.f1, 6)), (safe_sub_func_int8_t_s_s(((+l_645.f0) > l_626), p_20.f0)))))), 2UL))) >= 0xF4C9L), l_626)) > p_20.f0) == l_659[0]) || l_660)) < g_56)), 12)) > 0x58L) == 253UL), 7)) == g_107[4]) > l_627[5][0]);
                }
                (*g_128) = &l_486[3][1][0];
                if ((**g_125))
                    continue;
            }
            else
            { 
                (*g_373) = (**l_485);
            }
        }
    }
    return p_20.f0;
}



static union U1  func_21(uint64_t  p_22, int16_t  p_23, uint64_t  p_24)
{ 
    return g_482;
}



static const uint32_t  func_25(int32_t  p_26, int8_t  p_27, uint8_t  p_28, int16_t  p_29, const uint8_t  p_30)
{ 
    int32_t *l_444 = &g_390;
    int8_t l_447 = 0xE2L;
    int16_t *l_451 = &g_267;
    int16_t **l_450[2][4][5] = {{{&l_451,&l_451,&l_451,&l_451,&l_451},{&l_451,&l_451,&l_451,&l_451,(void*)0},{&l_451,&l_451,&l_451,&l_451,&l_451},{&l_451,&l_451,&l_451,&l_451,&l_451}},{{&l_451,&l_451,&l_451,&l_451,(void*)0},{&l_451,&l_451,&l_451,&l_451,&l_451},{&l_451,&l_451,&l_451,&l_451,&l_451},{&l_451,&l_451,&l_451,&l_451,(void*)0}}};
    int64_t *l_453 = &g_454;
    int32_t *l_455 = &g_56;
    struct S0 l_456 = {0x56L,65535UL};
    struct S0 *l_457 = &g_221;
    uint32_t *l_472 = &g_222[0];
    int i, j, k;
    l_444 = l_444;
    (*l_455) ^= (safe_rshift_func_int8_t_s_u((l_447 == (safe_div_func_uint16_t_u_u((((0x83L <= ((g_452 = &p_29) != &p_29)) ^ (((void*)0 != &g_155[1]) ^ ((((((*l_453) &= p_28) == (*l_444)) || g_53) <= 1UL) <= 0x710FL))) || 8L), (*l_444)))), g_34[1][3][2]));
    (*l_444) |= ((*l_455) = (*l_455));
    (*l_457) = l_456;
    (*l_455) = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((((*l_457) , 252UL) != (*l_455)) || ((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((((*l_472)++) >= g_383) | ((&l_455 != (void*)0) ^ (safe_rshift_func_uint8_t_u_u((((((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((g_155[0] ^ g_57[5][0]), (*l_455))), (*l_444))) != p_28) < (*l_444)) <= (*l_444)) , (*l_444)), 3)))) && (*l_455)), p_26)), p_28)), p_27)), p_30)) <= 0xBCL)), 1L)), p_30)), 0L));
    return p_27;
}



static int8_t  func_35(int8_t * p_36, uint16_t  p_37, int8_t  p_38, int8_t * p_39, int8_t * p_40)
{ 
    int32_t *l_55[3][1][3] = {{{(void*)0,(void*)0,(void*)0}},{{&g_56,&g_56,&g_56}},{{(void*)0,(void*)0,(void*)0}}};
    int8_t l_60 = 0x85L;
    uint64_t *l_153 = &g_121;
    union U1 l_263 = {0xA527L};
    int32_t **l_277[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t l_363 = 0x4E97L;
    int16_t l_388 = (-1L);
    uint32_t l_411 = 4294967294UL;
    uint32_t l_416 = 0xD06796A9L;
    int i, j, k;
    g_57[1][1]--;
    if ((l_60 &= 0L))
    { 
        int8_t *l_72 = &g_53;
        int8_t **l_71 = &l_72;
        int32_t l_79 = 0x643E267AL;
        int32_t l_80 = 2L;
        uint8_t *l_81 = &g_82[5];
        int8_t l_83 = 5L;
        uint16_t *l_123[4] = {&g_113,&g_113,&g_113,&g_113};
        uint8_t l_137[4][2][5] = {{{0xEEL,250UL,0UL,250UL,0xEEL},{0xEEL,250UL,0UL,250UL,0xEEL}},{{0xEEL,250UL,0UL,250UL,0xEEL},{0xEEL,250UL,0UL,250UL,0xEEL}},{{0xEEL,250UL,0UL,250UL,0xEEL},{0xEEL,250UL,0UL,250UL,0xEEL}},{{0xEEL,250UL,0UL,250UL,0xEEL},{0xEEL,250UL,0UL,250UL,0xEEL}}};
        uint64_t **l_193 = (void*)0;
        uint64_t * const *l_194[3][2][2] = {{{&l_153,&l_153},{(void*)0,&l_153}},{{&l_153,&l_153},{(void*)0,&l_153}},{{&l_153,&l_153},{&l_153,&l_153}}};
        int32_t l_200 = 0xB200155BL;
        uint16_t l_268 = 0xE2F3L;
        uint32_t l_273[6] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        uint32_t l_294 = 0xA2D980F1L;
        int32_t **l_326 = &l_55[0][0][1];
        union U1 *l_346 = &l_263;
        union U1 **l_347 = &l_346;
        struct S0 **l_369 = (void*)0;
        int64_t l_375 = 0x4130EAA1C201594FLL;
        int32_t l_378[4];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_378[i] = 0xCCEB7F38L;
        if ((safe_add_func_int64_t_s_s((0xEC499E98L && ((((((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(g_49[2][0][0], ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(g_49[2][0][0], (((*l_81) ^= (((&g_53 != ((*l_71) = &p_38)) <= (l_80 ^= (1UL > (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((l_79 >= g_57[5][1]), p_37)), g_49[2][1][1])), 3))))) , p_37)) == l_79))), g_57[4][1])) && p_37))), l_83)) <= g_49[2][0][0]) == 0x669DL) , p_37) && l_83) & (-1L))), p_38)))
        { 
            int32_t l_84[3][1][3] = {{{5L,5L,5L}},{{(-2L),(-2L),(-2L)}},{{5L,5L,5L}}};
            uint64_t l_122[3];
            int32_t l_133 = 0L;
            int32_t l_136 = 0L;
            int32_t **l_169[5] = {&g_126,&g_126,&g_126,&g_126,&g_126};
            int8_t ***l_172 = &l_71;
            uint64_t * const *l_176 = &l_153;
            uint64_t * const **l_175[7] = {&l_176,(void*)0,(void*)0,&l_176,(void*)0,(void*)0,&l_176};
            uint16_t * const l_183 = &g_113;
            const union U1 l_186 = {0x6A08L};
            int64_t l_195[7][7][5] = {{{0x624A242812E1121BLL,1L,0x6B7AEDB7C0C4574ALL,0x65CC132FBB45D56ELL,(-5L)},{(-3L),0x0763847764129267LL,(-7L),0x9DE1B36AA6F8ADBALL,0L},{0x245084BBD9A228B1LL,0x1C342DAB2CCD0575LL,1L,0x272D65887891B7C0LL,0xE96879FC72062B2DLL},{0x4895CB3EC86C0DB8LL,0x245084BBD9A228B1LL,7L,(-6L),(-3L)},{0xE6F13F4DB05CABCBLL,0x08352772FB52A324LL,7L,(-7L),(-1L)},{0x9DE1B36AA6F8ADBALL,(-1L),1L,0x62DD0B5AA5C670BDLL,0x7732ECB4BFE13DD6LL},{0x4C827FE7776E9E25LL,(-3L),(-7L),0x08352772FB52A324LL,1L}},{{0xE96879FC72062B2DLL,0x6B7AEDB7C0C4574ALL,0xF62B27B7FBD4062DLL,(-10L),0L},{0x4C827FE7776E9E25LL,(-1L),0xE96879FC72062B2DLL,0x32493EC21901E682LL,(-10L)},{5L,(-6L),0xC00A57CCE38ADB6ELL,4L,(-7L)},{7L,0L,(-1L),0x32493EC21901E682LL,3L},{0x624A242812E1121BLL,0x7F529ED1989E6024LL,0xE6F13F4DB05CABCBLL,(-10L),0L},{0L,0x6B7AEDB7C0C4574ALL,4L,5L,0x65CC132FBB45D56ELL},{7L,(-1L),0L,(-1L),(-9L)}},{{0x7F529ED1989E6024LL,0x32493EC21901E682LL,(-3L),0x65CC132FBB45D56ELL,0x4895CB3EC86C0DB8LL},{0xC00A57CCE38ADB6ELL,0x4C827FE7776E9E25LL,0L,0x8F3A24A8259F3710LL,0x4895CB3EC86C0DB8LL},{(-10L),0x0362B2AF547D1AE7LL,(-1L),(-7L),(-9L)},{(-1L),(-7L),0x7732ECB4BFE13DD6LL,0L,0x65CC132FBB45D56ELL},{1L,0L,0x24A5CBDD7E790059LL,0x24A5CBDD7E790059LL,0L},{0x0763847764129267LL,0xC00A57CCE38ADB6ELL,0xF62B27B7FBD4062DLL,7L,3L},{(-6L),0x32493EC21901E682LL,0xD6B70E42B31CC7D8LL,0L,(-7L)}},{{0x8F3A24A8259F3710LL,(-7L),0x38483FBC1EA61EF3LL,(-3L),(-10L)},{(-6L),0x8F3A24A8259F3710LL,1L,0x6B7AEDB7C0C4574ALL,0L},{0x0763847764129267LL,0x7F529ED1989E6024LL,(-1L),0x65CC132FBB45D56ELL,0x4C827FE7776E9E25LL},{1L,0x624A242812E1121BLL,0x38483FBC1EA61EF3LL,0xF62B27B7FBD4062DLL,(-1L)},{(-1L),0L,0x91106ACACA34AA79LL,0x7F529ED1989E6024LL,0xC00A57CCE38ADB6ELL},{(-10L),(-1L),1L,(-10L),(-6L)},{0xC00A57CCE38ADB6ELL,(-1L),0x24A5CBDD7E790059LL,3L,(-10L)}},{{0x7F529ED1989E6024LL,0L,0xC00A57CCE38ADB6ELL,0x4895CB3EC86C0DB8LL,(-3L)},{7L,0x624A242812E1121BLL,0x9DE1B36AA6F8ADBALL,0x32493EC21901E682LL,0x32493EC21901E682LL},{0L,0x7F529ED1989E6024LL,0L,1L,0L},{0x624A242812E1121BLL,0x8F3A24A8259F3710LL,4L,0x7F529ED1989E6024LL,0x38483FBC1EA61EF3LL},{7L,(-7L),0x245084BBD9A228B1LL,(-1L),0x0763847764129267LL},{5L,0x32493EC21901E682LL,4L,0x38483FBC1EA61EF3LL,0x4895CB3EC86C0DB8LL},{0x4C827FE7776E9E25LL,0xC00A57CCE38ADB6ELL,0L,0x6B7AEDB7C0C4574ALL,4L}},{{(-10L),0L,0x9DE1B36AA6F8ADBALL,(-7L),0x0763847764129267LL},{0x2B95ED4DF38324C0LL,(-7L),0xC00A57CCE38ADB6ELL,1L,0x65CC132FBB45D56ELL},{0L,0x0362B2AF547D1AE7LL,0x24A5CBDD7E790059LL,7L,0x0362B2AF547D1AE7LL},{0x0763847764129267LL,0x4C827FE7776E9E25LL,1L,7L,0x32493EC21901E682LL},{0L,0x32493EC21901E682LL,0x91106ACACA34AA79LL,1L,(-7L)},{0x6B7AEDB7C0C4574ALL,(-1L),0x38483FBC1EA61EF3LL,(-7L),1L},{(-6L),0x6B7AEDB7C0C4574ALL,(-1L),0x6B7AEDB7C0C4574ALL,(-6L)}},{{(-9L),0x7F529ED1989E6024LL,1L,0x38483FBC1EA61EF3LL,0x4C827FE7776E9E25LL},{0L,0L,0x38483FBC1EA61EF3LL,(-1L),0x2B95ED4DF38324C0LL},{(-1L),(-6L),0xD6B70E42B31CC7D8LL,0x7F529ED1989E6024LL,0x4C827FE7776E9E25LL},{1L,(-1L),0xF62B27B7FBD4062DLL,0xE6F13F4DB05CABCBLL,0x8F3A24A8259F3710LL},{0x2B95ED4DF38324C0LL,0x7732ECB4BFE13DD6LL,(-1L),4L,0xE6F13F4DB05CABCBLL},{(-1L),0x8F3A24A8259F3710LL,(-1L),0L,0x91106ACACA34AA79LL},{(-1L),(-9L),(-7L),(-3L),4L}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_122[i] = 0x744A690E31D76F07LL;
            if ((l_84[1][0][1] = g_49[2][0][0]))
            { 
                return g_49[2][0][0];
            }
            else
            { 
                uint8_t **l_89 = (void*)0;
                uint8_t **l_90 = (void*)0;
                uint8_t **l_91 = &l_81;
                int32_t l_104 = (-1L);
                const uint8_t *l_106 = &g_107[4];
                const uint8_t **l_105 = &l_106;
                if ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((*l_91) = &g_49[2][0][0]) != ((*l_105) = func_41(p_38, g_14, (l_104 ^= ((safe_mul_func_int8_t_s_s(((g_82[5] | (0xFF147090205405EALL ^ ((safe_div_func_uint64_t_u_u(((safe_sub_func_int16_t_s_s((1L ^ (safe_div_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((g_14 == 0L), 6)), g_56)) > p_37), l_84[2][0][2]))), 65535UL)) <= g_56), 0x80A8980DF3AEBB8FLL)) != (*p_39)))) , g_53), p_38)) , g_49[2][0][0]))))), l_79)), g_53)))
                { 
                    uint16_t *l_112 = &g_113;
                    uint64_t *l_120[7][5] = {{&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121}};
                    int16_t l_124 = 1L;
                    int32_t ***l_127 = &g_125;
                    int32_t ***l_129 = (void*)0;
                    int32_t ***l_130 = (void*)0;
                    int32_t **l_132 = &l_55[1][0][2];
                    int32_t ***l_131 = &l_132;
                    int32_t l_134 = 0x06A83B75L;
                    int32_t l_135[5][7][3] = {{{0xED9F2ED6L,0xC9324971L,(-9L)},{4L,0xD288A0B6L,0L},{(-1L),(-1L),0x0C45E9BCL},{(-1L),0x198F030FL,0x5B16568BL},{4L,0x95C984E5L,0L},{0xED9F2ED6L,0x198F030FL,0xD8D5F6D3L},{0xD288A0B6L,(-1L),0xD8D5F6D3L}},{{0x08392A3DL,0xD288A0B6L,0L},{0xC9324971L,0xC9324971L,0x5B16568BL},{0x08392A3DL,0xED9F2ED6L,0x0C45E9BCL},{0xD288A0B6L,0xED9F2ED6L,0L},{0xED9F2ED6L,0xC9324971L,(-9L)},{4L,0xD288A0B6L,0L},{(-1L),(-1L),0x0C45E9BCL}},{{(-1L),0x198F030FL,0x5B16568BL},{4L,0x95C984E5L,0L},{0xED9F2ED6L,0x198F030FL,0xD8D5F6D3L},{0xD288A0B6L,(-1L),0xD8D5F6D3L},{0x08392A3DL,0xD288A0B6L,0L},{0xC9324971L,0xC9324971L,0x5B16568BL},{0x08392A3DL,0xED9F2ED6L,0x0C45E9BCL}},{{0xD288A0B6L,0xED9F2ED6L,0L},{0xED9F2ED6L,0xC9324971L,(-9L)},{4L,0xD288A0B6L,0L},{(-1L),(-1L),0x0C45E9BCL},{(-1L),0x198F030FL,0x5B16568BL},{4L,0x95C984E5L,0L},{0xED9F2ED6L,0x198F030FL,0xD8D5F6D3L}},{{0xD288A0B6L,(-1L),0xD8D5F6D3L},{0x08392A3DL,0xD288A0B6L,0L},{0xC9324971L,0xC9324971L,0x5B16568BL},{0x08392A3DL,0xED9F2ED6L,0x0C45E9BCL},{0xD288A0B6L,0xED9F2ED6L,0L},{0xED9F2ED6L,0xC9324971L,(-9L)},{4L,0xD288A0B6L,0L}}};
                    int i, j, k;
                    g_56 ^= g_53;
                    l_124 = (safe_mod_func_int64_t_s_s(((((0L | 0UL) & (safe_lshift_func_uint16_t_u_s(((*l_112) = 1UL), (~p_37)))) , (((!(((l_83 , (((safe_mod_func_uint64_t_u_u(((g_121 ^= ((l_80 || (p_38 && 1L)) | g_82[5])) | g_56), l_122[2])) == 0UL) , l_123[3])) != &p_37) <= l_104)) , 1UL) || g_49[0][2][0])) || g_82[4]), (-8L)));
                    (*g_126) |= ((g_128 = ((*l_127) = g_125)) == ((*l_131) = &l_55[0][0][1]));
                    ++l_137[0][0][3];
                }
                else
                { 
                    uint64_t *l_152 = &g_121;
                    uint64_t **l_151 = &l_152;
                    int16_t l_154 = 1L;
                    l_154 |= (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int8_t_s_s(((((p_37 | ((safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u(247UL, (safe_rshift_func_uint16_t_u_u(0UL, ((p_37 , ((*l_151) = ((0x70BDL ^ l_84[0][0][2]) , &g_121))) != l_153))))), p_38)) != p_37)) , 0L) , &g_121) == &g_121), 7)) , p_38))), p_37));
                }
                ++g_155[1];
                if (g_53)
                    goto lbl_160;
                for (l_133 = 0; (l_133 != (-26)); --l_133)
                { 
                    (**g_125) ^= l_84[1][0][1];
                }
            }
lbl_160:
            l_133 = p_38;
            (*g_126) = (safe_div_func_int32_t_s_s((*g_126), 4294967287UL));
            if ((safe_mod_func_uint64_t_u_u(((safe_add_func_int32_t_s_s((**g_125), (safe_add_func_int8_t_s_s(((void*)0 != l_169[3]), (((*l_172) = g_170[1]) == &l_72))))) <= ((safe_rshift_func_int16_t_s_s(0xC5A9L, 5)) , l_137[0][0][1])), g_49[3][1][0])))
            { 
                uint64_t * const ***l_177 = &l_175[1];
                uint64_t **l_191 = &l_153;
                uint64_t ***l_192[6];
                int32_t l_196 = 8L;
                int32_t l_238 = 1L;
                int32_t l_239 = 0xF4C23C4AL;
                int i;
                for (i = 0; i < 6; i++)
                    l_192[i] = (void*)0;
                (*l_177) = l_175[1];
                for (l_80 = 0; l_80 < 4; l_80 += 1)
                {
                    for (g_113 = 0; g_113 < 3; g_113 += 1)
                    {
                        for (l_133 = 0; l_133 < 2; l_133 += 1)
                        {
                            g_49[l_80][g_113][l_133] = 0UL;
                        }
                    }
                }
                l_79 = ((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s((safe_mul_func_int8_t_s_s((l_80 || (((l_183 == &g_113) != (g_82[1] < (g_57[1][1] >= ((safe_add_func_uint16_t_u_u((l_186 , ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(((l_193 = l_191) == l_194[1][1][0]), 3)), 9)) == l_195[4][3][2])), p_37)) & p_38)))) && l_196)), 2UL)))), l_196)) & 6L);
                for (g_56 = 0; (g_56 <= 17); g_56 = safe_add_func_int16_t_s_s(g_56, 6))
                { 
                    int8_t l_199 = 0x4CL;
                    int32_t l_202 = (-1L);
                    int32_t l_203 = 5L;
                    int32_t l_204 = 0x97D826FCL;
                    uint32_t *l_236 = &g_237;
                    --g_205;
                    l_79 |= ((!((safe_add_func_uint16_t_u_u(0xAA57L, ((*l_183) |= (((((safe_mod_func_int64_t_s_s(((~g_107[1]) & (((safe_mul_func_int16_t_s_s((((((*l_236) = ((safe_mul_func_uint8_t_u_u((((*l_81) = (safe_mod_func_uint64_t_u_u((g_53 , (((safe_unary_minus_func_int64_t_s(0xF1DCE19F1BC87BEFLL)) == (g_221 , ((g_223 = (g_222[0] = p_38)) | (safe_add_func_int64_t_s_s(((((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((((**g_125) <= l_137[0][1][4]) & g_221.f1), p_38)), p_38)), 249UL)), 1L)), 1L)) < (*p_39)) >= 0x32L) , l_204), 4UL))))) > g_56)), 0xFDC2693B0AE34072LL))) != 0xD7L), (-4L))) && l_196)) ^ 0x222683E6L) | p_38) && l_83), 1UL)) <= l_202) <= g_205)), p_38)) && g_57[5][1]) , l_203) ^ p_37) != l_83)))) < g_155[1])) >= (-1L));
                    --g_240[3];
                }
            }
            else
            { 
                uint64_t l_251 = 1UL;
                uint32_t l_264 = 0UL;
                int16_t *l_265 = &g_201;
                int16_t *l_266 = &g_267;
                union U1 l_276 = {0x6614L};
                int64_t l_289 = (-1L);
                int64_t *l_290 = &l_195[4][3][2];
                int32_t l_291 = 0x092D65BCL;
                uint8_t *l_323 = &l_137[0][0][3];
                struct S0 **l_331 = (void*)0;
                struct S0 *l_333 = &g_221;
                struct S0 **l_332 = &l_333;
                l_200 &= (((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((((((((p_38 <= (safe_sub_func_int32_t_s_s((l_251 , (safe_sub_func_uint32_t_u_u(0xFDF0439DL, (((((*p_36) = (((*l_266) |= (p_37 < ((safe_rshift_func_uint8_t_u_s((~((((safe_rshift_func_int16_t_s_s((g_205 , ((*l_265) = (safe_rshift_func_uint16_t_u_u(((l_263 , (0L != 65531UL)) ^ l_264), p_38)))), 4)) != 0x3C6A0BBF4FE60449LL) || 4UL) , g_49[3][2][0])), 0)) < p_38))) >= l_251)) >= g_223) ^ 0L) ^ (-2L))))), l_83))) < p_38) <= l_264) && l_268) , p_40) == p_40) ^ l_268) | 0x1DL), g_237)), (**g_128))) <= g_14), l_268)) != g_221.f0) && 248UL);
                (**g_128) &= (((0x31CCCDEBL | ((l_193 = g_269[6]) != &g_270[1][1])) ^ (p_38 = (safe_mod_func_int64_t_s_s(l_273[5], (safe_add_func_uint64_t_u_u((((*p_36) = (p_38 != (((l_276 , l_277[4]) != l_169[2]) >= p_37))) && g_53), 0xD9C3EBA553A19731LL)))))) , l_268);
                (**g_125) |= (!l_137[2][0][4]);
                if ((g_293 = (((((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((&l_277[3] == ((*p_39) , (void*)0)), (((((*g_126) = (p_38 < (l_291 = ((((((((((--(**l_193)) | (((safe_sub_func_uint8_t_u_u((g_56 < (((*l_290) = ((g_155[1] , ((safe_add_func_uint64_t_u_u(l_289, p_37)) || l_268)) ^ (*g_171))) > g_267)), g_267)) , 247UL) <= g_221.f1)) && p_37) == p_38) <= p_37) , g_205) & g_155[1]) == p_37) , 0xC684L) != 0x0DFBL)))) , 0x0855L) < g_155[1]) > 9L))), 18446744073709551615UL)) , &p_38) == g_292[2][0][0]) <= 0x3204L) || l_200)))
                { 
                    int64_t *l_297 = &l_289;
                    int32_t l_299 = 0xADD65BEBL;
                    uint32_t *l_313 = &g_222[0];
                    uint32_t *l_314 = &g_237;
                    uint32_t *l_319 = (void*)0;
                    uint32_t *l_320 = &g_298;
                    uint32_t *l_324 = &g_325;
                    l_79 &= l_294;
                    g_298 |= ((safe_sub_func_int16_t_s_s(1L, (l_297 != (void*)0))) , ((**g_128) = p_38));
                    --g_301;
                    (**g_125) = (l_299 != (((*l_324) ^= (safe_add_func_uint32_t_u_u(0x9FB36EDBL, ((l_291 = ((*p_39) &= (((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s(0x060CL, ((**g_125) & ((*l_314) ^= ((*l_313) = (!(&p_38 == ((**l_172) = &p_38)))))))), (((safe_add_func_int32_t_s_s(((((safe_add_func_uint32_t_u_u((++(*l_320)), ((&l_80 == (*g_128)) | 0L))) != p_37) >= 0x775B8159L) == l_273[5]), 0x21F73AB0L)) != (**g_125)) || l_80))), p_38)) , l_323) != p_39))) < l_299)))) ^ 0x20332D9FL));
                    (*g_126) |= (l_326 != (void*)0);
                }
                else
                { 
                    (**g_125) &= ((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((-1L), 3)) == g_107[1]), (p_38 <= l_276.f0))) | 0UL);
                    (*g_125) = &l_291;
                }
                (*l_332) = &g_221;
            }
        }
        else
        { 
            int64_t l_338 = (-8L);
            for (g_293 = 0; (g_293 != (-12)); g_293 = safe_sub_func_uint8_t_u_u(g_293, 3))
            { 
                uint8_t l_345 = 0x7CL;
                for (p_37 = 0; (p_37 <= 1); p_37 += 1)
                { 
                    int32_t l_343 = (-3L);
                    int32_t l_344[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_344[i] = (-5L);
                    l_344[1] &= (((g_221 , (((safe_add_func_int32_t_s_s(p_37, p_38)) >= (((*l_153) = l_338) && p_38)) && ((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(g_240[3], 4)), l_343)) & p_38))) > (*g_171)) || g_53);
                    (**g_125) = l_345;
                }
                if ((**g_128))
                    continue;
                return l_345;
            }
        }
        (*l_347) = l_346;
        ++g_348;
        for (l_200 = 13; (l_200 != (-14)); l_200 = safe_sub_func_uint8_t_u_u(l_200, 9))
        { 
            struct S0 ***l_370 = &l_369;
            int16_t l_374 = 0xCBE6L;
            int32_t l_376 = 0x392B9A8FL;
            int32_t l_379 = 0x51B7049EL;
            int32_t l_380 = (-1L);
            int32_t l_381 = (-1L);
            int32_t l_382[2][6] = {{0x2F7C02BEL,0x2F7C02BEL,0x2F7C02BEL,0x2F7C02BEL,0x2F7C02BEL,0x2F7C02BEL},{0x2F7C02BEL,0x2F7C02BEL,0x2F7C02BEL,0x2F7C02BEL,0x2F7C02BEL,0x2F7C02BEL}};
            union U1 **l_423 = &l_346;
            int i, j;
            l_376 = (safe_sub_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(((((safe_mul_func_int8_t_s_s(0x19L, g_301)) & g_49[2][0][0]) , ((safe_mod_func_int64_t_s_s((l_363 , ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(0UL, g_368)), (((g_372[0] = (g_371 = ((*l_370) = l_369))) == (void*)0) , l_374))) , p_37)), 0x7F8E56C43B325822LL)) <= 0x96L)) && p_37), (-1L))) <= 0x3AF5582DL) >= l_375), g_222[0])), 0xB6B3D8430CE5974ALL));
            ++g_384;
            for (l_263.f1.f0 = 0; (l_263.f1.f0 <= 5); l_263.f1.f0 += 1)
            { 
                int32_t l_387 = 0L;
                int32_t l_389 = 0x38EFCEFCL;
                union U1 l_404 = {0xBD6FL};
                uint32_t l_406[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                const struct S0 l_407 = {0x34L,65527UL};
                union U1 **l_426[1][4] = {{&l_346,&l_346,&l_346,&l_346}};
                int i, j;
                for (g_384 = 0; (g_384 <= 3); g_384 += 1)
                { 
                    int i;
                    return l_378[g_384];
                }
                g_391[1]--;
                if ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s(((*p_36) = l_389), (safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s(l_379, (l_404 , l_387))), (safe_unary_minus_func_int64_t_s(l_406[4])))))) , (l_407 , (*g_171))), 5)), p_38)))
                { 
                    int32_t * const l_410 = &l_200;
                    int i;
                    l_411 = (l_380 ^= ((l_381 , (-1L)) < (safe_div_func_uint16_t_u_u((l_410 != &l_389), g_82[5]))));
                    return l_382[1][2];
                }
                else
                { 
                    int32_t l_421 = 0xB9727D14L;
                    int32_t l_422 = 0x62E4E894L;
                    union U1 ***l_424 = (void*)0;
                    union U1 ***l_425[2][5][6] = {{{&l_347,&l_347,&l_423,&l_347,&l_347,&l_423},{&l_347,&l_347,&l_423,&l_347,&l_347,&l_423},{&l_347,&l_423,&l_347,&l_423,&l_423,&l_347},{&l_423,&l_423,&l_347,&l_423,&l_423,&l_347},{&l_423,&l_423,&l_347,&l_423,&l_423,&l_347}},{{&l_423,&l_423,&l_347,&l_423,&l_423,&l_347},{&l_423,&l_423,&l_347,&l_423,&l_423,&l_347},{&l_423,&l_423,&l_347,&l_423,&l_423,&l_347},{&l_423,&l_423,&l_347,&l_423,&l_423,&l_347},{&l_423,&l_423,&l_347,&l_423,&l_423,&l_347}}};
                    int i, j, k;
                    l_422 ^= (((safe_lshift_func_uint8_t_u_s(p_38, (safe_rshift_func_int16_t_s_s((0x2EL <= (((((l_416 , (((254UL & (((safe_sub_func_uint64_t_u_u((l_374 || (l_389 = (safe_mul_func_int16_t_s_s(0x9381L, g_301)))), l_407.f1)) != l_407.f1) | l_421)) != p_37) >= p_38)) != 0xAA7BB390FAAF2580LL) < 5L) != 65535UL) | 0xA745L)), 12)))) , p_37) >= 2L);
                    l_378[3] = p_37;
                    l_426[0][2] = l_423;
                    l_387 ^= 1L;
                    (*l_326) = &l_380;
                }
                for (g_301 = 0; (g_301 <= 3); g_301 += 1)
                { 
                    uint32_t l_433 = 0xB770DA58L;
                    int32_t l_440 = 1L;
                    if (p_37)
                        break;
                    if (p_37)
                        break;
                    l_389 |= ((safe_mod_func_uint64_t_u_u(((*l_153) = 0UL), (safe_div_func_int8_t_s_s(1L, p_38)))) , (safe_sub_func_int16_t_s_s(0xD569L, (l_433 < ((((((safe_add_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((1L | (l_440 &= l_433)), (*p_39))), p_38)) <= (*g_171)), p_38)) || l_440) <= g_240[0]) > p_38) == (-1L)) > 18446744073709551615UL)))));
                    if (p_37)
                        continue;
                    if (p_38)
                        continue;
                }
                (*g_125) = &l_389;
            }
        }
        return (*p_39);
    }
    else
    { 
        return (*p_36);
    }
}



static int8_t * func_41(const uint64_t  p_42, int32_t  p_43, uint8_t  p_44)
{ 
    int32_t *l_46 = &g_14;
    int32_t **l_45 = &l_46;
    int32_t *l_48 = &g_14;
    int32_t **l_47 = &l_48;
    int8_t *l_52 = &g_53;
    (*l_47) = ((*l_45) = (void*)0);
    g_49[2][0][0]++;
    return l_52;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_34[i][j][k], "g_34[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_49[i][j][k], "g_49[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_57[i][j], "g_57[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_82[i], "g_82[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_107[i], "g_107[i]", print_hash_value);

    }
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_155[i], "g_155[i]", print_hash_value);

    }
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_221.f0, "g_221.f0", print_hash_value);
    transparent_crc(g_221.f1, "g_221.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_222[i], "g_222[i]", print_hash_value);

    }
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_240[i], "g_240[i]", print_hash_value);

    }
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_300[i][j][k], "g_300[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_391[i], "g_391[i]", print_hash_value);

    }
    transparent_crc(g_454, "g_454", print_hash_value);
    transparent_crc(g_482.f0, "g_482.f0", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_550[i][j][k], "g_550[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_751, "g_751", print_hash_value);
    transparent_crc(g_752, "g_752", print_hash_value);
    transparent_crc(g_753, "g_753", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_853[i][j][k].f0, "g_853[i][j][k].f0", print_hash_value);
                transparent_crc(g_853[i][j][k].f1, "g_853[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_961, "g_961", print_hash_value);
    transparent_crc(g_976, "g_976", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_989[i][j][k], "g_989[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_990, "g_990", print_hash_value);
    transparent_crc(g_1021, "g_1021", print_hash_value);
    transparent_crc(g_1026, "g_1026", print_hash_value);
    transparent_crc(g_1045, "g_1045", print_hash_value);
    transparent_crc(g_1086, "g_1086", print_hash_value);
    transparent_crc(g_1088, "g_1088", print_hash_value);
    transparent_crc(g_1090, "g_1090", print_hash_value);
    transparent_crc(g_1091, "g_1091", print_hash_value);
    transparent_crc(g_1092, "g_1092", print_hash_value);
    transparent_crc(g_1093, "g_1093", print_hash_value);
    transparent_crc(g_1094, "g_1094", print_hash_value);
    transparent_crc(g_1095, "g_1095", print_hash_value);
    transparent_crc(g_1096, "g_1096", print_hash_value);
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1098, "g_1098", print_hash_value);
    transparent_crc(g_1099, "g_1099", print_hash_value);
    transparent_crc(g_1103, "g_1103", print_hash_value);
    transparent_crc(g_1118, "g_1118", print_hash_value);
    transparent_crc(g_1148, "g_1148", print_hash_value);
    transparent_crc(g_1160, "g_1160", print_hash_value);
    transparent_crc(g_1161, "g_1161", print_hash_value);
    transparent_crc(g_1162, "g_1162", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
