// SPDX-License-Identifier: MIT
// cctest_csmith_6563f901.c --- cctest case csmith_6563f901 (csmith seed 1701050625)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x60d2d40e */
/* @exp_ticks 0x6cde */

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

// Options:   -s 1701050625 -o /tmp/csmith_gen_i6f87c61/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int8_t  f1;
   const uint8_t  f2;
   uint16_t  f3;
   int32_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

struct S1 {
   uint32_t  f0;
   const int16_t  f1;
   uint32_t  f2;
   int32_t  f3;
};

struct S2 {
   const uint32_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   uint8_t  f3;
   uint64_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   const int32_t  f0;
};
#pragma pack(pop)

union U4 {
   const uint8_t  f0;
   const uint64_t  f1;
   int64_t  f2;
   struct S3  f3;
};


static const int32_t g_2 = 0x0789328AL;
static int16_t g_7 = 0x7110L;
static uint8_t g_9 = 0UL;
static int64_t g_11 = (-5L);
static struct S3 g_15 = {5L};
static uint16_t g_68 = 0xE709L;
static int32_t g_119 = 1L;
static struct S0 g_127[2][4][2] = {{{{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L},{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L}},{{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L},{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L}},{{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L},{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L}},{{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L},{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L}}},{{{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L},{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L}},{{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L},{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L}},{{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L},{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L}},{{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L},{0xA81BD54BL,-2L,0x35L,0xAECAL,9L,0x143A6694L}}}};
static int16_t g_147 = 0x9FEDL;
static uint16_t g_150[5][2] = {{1UL,0xFDBCL},{0xAD79L,0xF6FAL},{0xFDBCL,0xF6FAL},{0xAD79L,0xFDBCL},{1UL,1UL}};
static int16_t g_171 = 0x7F8DL;
static int16_t g_172[5][4][1] = {{{(-1L)},{0xCDA2L},{(-1L)},{0xFE05L}},{{0xD2D0L},{0xFE05L},{(-1L)},{0xCDA2L}},{{(-1L)},{0xFE05L},{0xD2D0L},{0xFE05L}},{{(-1L)},{0xCDA2L},{(-1L)},{0xFE05L}},{{0xD2D0L},{0xFE05L},{(-1L)},{0xCDA2L}}};
static uint64_t g_174 = 6UL;
static uint8_t g_224[2][1] = {{0x06L},{0x06L}};
static struct S2 g_242[1][5][3] = {{{{0UL,0x478B0056L,8UL,0xC9L,0x0E12FE7324F2782ALL},{0UL,0x478B0056L,8UL,0xC9L,0x0E12FE7324F2782ALL},{0UL,0x478B0056L,8UL,0xC9L,0x0E12FE7324F2782ALL}},{{0x564F0666L,0xD7ADAAC6L,0x079731E7L,0x01L,18446744073709551608UL},{1UL,0x1A32E478L,0x3F0A855FL,251UL,0x74EEE24FA2072C5ELL},{0x564F0666L,0xD7ADAAC6L,0x079731E7L,0x01L,18446744073709551608UL}},{{0UL,0x478B0056L,8UL,0xC9L,0x0E12FE7324F2782ALL},{0UL,0x478B0056L,8UL,0xC9L,0x0E12FE7324F2782ALL},{0UL,0x478B0056L,8UL,0xC9L,0x0E12FE7324F2782ALL}},{{0x564F0666L,0xD7ADAAC6L,0x079731E7L,0x01L,18446744073709551608UL},{1UL,0x1A32E478L,0x3F0A855FL,251UL,0x74EEE24FA2072C5ELL},{0x564F0666L,0xD7ADAAC6L,0x079731E7L,0x01L,18446744073709551608UL}},{{0UL,0x478B0056L,8UL,0xC9L,0x0E12FE7324F2782ALL},{0UL,0x478B0056L,8UL,0xC9L,0x0E12FE7324F2782ALL},{0UL,0x478B0056L,8UL,0xC9L,0x0E12FE7324F2782ALL}}}};
static struct S1 g_274 = {4294967289UL,7L,0x8E83701EL,0x5F4E9E33L};
static int32_t g_286 = 0x2B07F2A8L;



static int8_t  func_1(void);
static int32_t  func_12(struct S3  p_13, int64_t  p_14);
static uint64_t  func_21(uint32_t  p_22, uint32_t  p_23, int16_t  p_24, uint32_t  p_25);
static uint32_t  func_28(int32_t  p_29, struct S0  p_30, int8_t  p_31, int8_t  p_32, uint8_t  p_33);




static int8_t  func_1(void)
{ 
    int32_t l_8 = (-1L);
    int64_t l_16 = 0xEDB6B7BE2D3D4782LL;
    uint32_t l_273 = 0x2236D5A7L;
    l_8 = ((((g_2 | g_2) > ((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(g_2, g_2)), g_2)) > g_7) == 0xB6CD3335L) < g_2)) < 0xAA2DL) > g_2);
    if (l_8)
    { 
        int32_t l_10[2];
        int8_t l_276 = 0L;
        int i;
        for (i = 0; i < 2; i++)
            l_10[i] = 0x93842573L;
        if ((g_9 = 0x92E3F915L))
        { 
            int32_t l_275 = 1L;
            g_11 = l_10[1];
            if (func_12(g_15, l_16))
            { 
                int16_t l_272 = 0x2C00L;
                l_273 = l_272;
                g_274.f3 = ((g_127[1][0][0].f4 = (((l_275 = (g_274 , (--g_274.f0))) < ((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(g_274.f2, 0x14L)), (g_7 , g_15.f0))), l_10[1])) , l_276)) , g_171)) | 4294967295UL);
            }
            else
            { 
                g_286 |= (!g_9);
            }
        }
        else
        { 
            for (g_274.f3 = 0; (g_274.f3 > 9); g_274.f3 = safe_add_func_int32_t_s_s(g_274.f3, 2))
            { 
                return g_127[1][0][0].f3;
            }
            return g_171;
        }
    }
    else
    { 
        int32_t l_289 = (-3L);
        g_127[1][0][0].f4 = l_289;
    }
    return g_172[4][0][0];
}



static int32_t  func_12(struct S3  p_13, int64_t  p_14)
{ 
    struct S0 l_34 = {0UL,0x0CL,0UL,0x8859L,-6L,0UL};
    const struct S2 l_225 = {0x7AB6034BL,8UL,1UL,0x58L,4UL};
    const int32_t l_264 = 0xA52ED1EEL;
    for (g_7 = 0; (g_7 != 0); g_7 = safe_add_func_int32_t_s_s(g_7, 8))
    { 
        int64_t l_35 = 0x502870B1B9B96406LL;
        int32_t l_38 = 1L;
        g_224[1][0] &= (safe_rshift_func_int8_t_s_s((0xD437F1BD53D2AE45LL ^ func_21(p_13.f0, (l_38 |= ((safe_rshift_func_uint8_t_u_u((func_28(p_13.f0, l_34, l_34.f5, g_7, l_35) || 1UL), g_7)) , 0x719EFCC7L)), p_13.f0, g_9)), g_127[1][0][0].f3));
        return p_13.f0;
    }
    l_34.f4 |= ((p_14 ^ (-1L)) & (g_127[0][3][1] , ((((l_34.f2 | l_34.f0) != g_147) , l_225) , l_34.f1)));
    if ((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((0x04CDBB5A92DE4622LL < l_34.f3), (safe_add_func_uint16_t_u_u((+(((g_119 = (p_13.f0 >= (safe_mul_func_int8_t_s_s((g_127[1][0][0].f1 = (+g_174)), 6L)))) | 0L) < p_13.f0)), l_225.f1)))), 2UL)))
    { 
        int64_t l_251 = 0xFDCDC94ECEE0DB94LL;
        for (g_174 = 0; (g_174 == 29); g_174 = safe_add_func_uint8_t_u_u(g_174, 5))
        { 
            uint16_t l_245 = 65526UL;
            g_127[1][0][0].f4 = (0x1891F527L == (l_245 &= (safe_div_func_int32_t_s_s((((((p_14 | (g_119 = ((safe_add_func_uint32_t_u_u((g_242[0][3][2] , (safe_add_func_int64_t_s_s(p_14, p_13.f0))), 0x373AB29AL)) != 0x9D8E522D616180E2LL))) <= 1L) && 255UL) | p_13.f0) && g_242[0][3][2].f2), p_14))));
        }
        for (l_34.f1 = 2; (l_34.f1 <= (-2)); l_34.f1--)
        { 
            int16_t l_250 = 0L;
            for (g_9 = 0; (g_9 >= 57); g_9++)
            { 
                if (l_250)
                    break;
            }
            if (l_251)
                continue;
        }
    }
    else
    { 
        for (l_34.f4 = 0; (l_34.f4 <= (-7)); l_34.f4 = safe_sub_func_uint8_t_u_u(l_34.f4, 3))
        { 
            uint8_t l_254 = 1UL;
            uint32_t l_271 = 18446744073709551615UL;
            l_254 &= p_13.f0;
            l_271 = ((safe_rshift_func_int8_t_s_u(0x8BL, (((safe_unary_minus_func_int64_t_s((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s((-1L), (l_264 ^ (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((g_9 , p_13.f0) ^ p_13.f0), g_68)), 9)), 251UL))))) , 0xBDC5L), p_14)) <= 18446744073709551615UL) && (-1L)), 6)))) > p_13.f0) ^ 0x1811C08D24769223LL))) == 0x6CF7E5AC6BCAB004LL);
        }
    }
    return p_14;
}



static uint64_t  func_21(uint32_t  p_22, uint32_t  p_23, int16_t  p_24, uint32_t  p_25)
{ 
    uint16_t l_49[5] = {65535UL,65535UL,65535UL,65535UL,65535UL};
    struct S0 l_62 = {18446744073709551615UL,-1L,6UL,0x5DB2L,0xC3D8A5C0L,18446744073709551612UL};
    int32_t l_169 = 0x661823C7L;
    int32_t l_170 = 0L;
    int i;
    for (g_11 = 9; (g_11 > (-30)); --g_11)
    { 
        uint64_t l_52 = 18446744073709551615UL;
        struct S2 l_57 = {1UL,0UL,0x131AC691L,0xF0L,0x12742E7FF2B9ACCELL};
        union U4 l_58 = {3UL};
        int32_t l_59 = 0x5618A321L;
        l_59 = ((safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(l_49[4], (safe_mod_func_int32_t_s_s(l_52, (safe_div_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((((((l_57 , ((l_58 , g_15.f0) , 255UL)) <= p_25) && l_49[4]) > g_11) & g_9), l_49[2])) && g_2), l_57.f2)))))) || g_7), l_57.f4)), p_22)) == l_57.f3), g_11)) | g_9);
        for (p_23 = 29; (p_23 == 41); p_23 = safe_add_func_int16_t_s_s(p_23, 3))
        { 
            int8_t l_63 = (-1L);
            l_63 = (l_62 , 0x02A83C5EL);
        }
    }
    for (p_22 = 0; (p_22 <= 4); p_22 += 1)
    { 
        struct S0 l_76 = {1UL,0x62L,0xADL,6UL,0xB7884FD3L,0x1F6F3B3EL};
        union U4 l_92 = {0xD1L};
        uint64_t l_95 = 6UL;
        struct S1 l_164 = {0xD6C9FEA8L,0xEED4L,0xC5B3E99CL,8L};
        int i;
        for (l_62.f3 = 0; (l_62.f3 <= 4); l_62.f3 += 1)
        { 
            uint64_t l_77 = 18446744073709551613UL;
            int i;
            g_68 = ((l_49[l_62.f3] != (safe_add_func_int64_t_s_s(p_24, (l_49[l_62.f3] , ((safe_div_func_uint16_t_u_u((l_62.f2 > l_62.f2), g_15.f0)) || l_49[l_62.f3]))))) > 0x95DEL);
            l_77 |= (+(((safe_lshift_func_uint16_t_u_s(l_49[4], 7)) != ((safe_div_func_uint8_t_u_u(254UL, ((((safe_mul_func_uint8_t_u_u(((((l_76 , 0x485FL) != p_25) , (-1L)) == l_62.f4), 0x38L)) >= p_24) <= g_15.f0) | l_62.f4))) | l_49[l_62.f3])) < (-1L)));
            if (p_23)
                break;
        }
        if ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_49[p_22] = (0xB6L != g_11)), p_22)), ((safe_div_func_uint64_t_u_u(g_11, p_22)) , 0x3CEBL))))
        { 
            int8_t l_86 = 0x2BL;
            int32_t l_102 = 0xD86AF607L;
            int32_t l_103[4] = {(-9L),(-9L),(-9L),(-9L)};
            int i;
            if (((safe_rshift_func_uint16_t_u_s(l_86, (safe_sub_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(g_2, (safe_unary_minus_func_uint16_t_u(((((l_92 , (safe_add_func_int32_t_s_s(g_68, g_7))) == 0xBC35L) != g_11) >= l_62.f5))))) | g_2) , l_76.f2), l_62.f3)))) >= l_95))
            { 
                int32_t l_108 = 0x942FC28BL;
                int32_t l_109 = 0xBA37D4A0L;
                l_103[3] = (1UL <= (safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(l_76.f3, g_15.f0)), ((safe_mul_func_uint16_t_u_u(l_102, p_22)) ^ g_7))));
                l_109 ^= ((safe_rshift_func_uint16_t_u_s(l_76.f0, 14)) > (0x714E35B4FB637DDFLL >= (l_108 = ((((safe_sub_func_int8_t_s_s(p_24, 0xA2L)) < l_76.f2) < p_22) , l_108))));
            }
            else
            { 
                if (l_92.f0)
                    break;
                g_119 &= (safe_add_func_int32_t_s_s((((~(safe_sub_func_int64_t_s_s((-2L), 0L))) , g_15.f0) != ((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((8UL & 0x52L), g_2)), 65532UL)) != g_15.f0)), p_22));
            }
            for (g_68 = 0; (g_68 <= 31); g_68 = safe_add_func_uint8_t_u_u(g_68, 5))
            { 
                int32_t l_122 = 0xD86C0845L;
                l_122 = l_76.f0;
                g_119 = l_62.f3;
            }
        }
        else
        { 
            struct S0 l_139[3][4][1] = {{{{18446744073709551615UL,0xC8L,255UL,65531UL,0x8884C663L,0UL}},{{18446744073709551615UL,0xC8L,255UL,65531UL,0x8884C663L,0UL}},{{0xB80262EEL,-1L,0x51L,0x2B35L,1L,18446744073709551613UL}},{{18446744073709551611UL,1L,0UL,0x5878L,0xC11135B9L,0xF13429A0L}}},{{{0xB80262EEL,-1L,0x51L,0x2B35L,1L,18446744073709551613UL}},{{18446744073709551615UL,0xC8L,255UL,65531UL,0x8884C663L,0UL}},{{18446744073709551615UL,0xC8L,255UL,65531UL,0x8884C663L,0UL}},{{0xB80262EEL,-1L,0x51L,0x2B35L,1L,18446744073709551613UL}}},{{{18446744073709551611UL,1L,0UL,0x5878L,0xC11135B9L,0xF13429A0L}},{{0xB80262EEL,-1L,0x51L,0x2B35L,1L,18446744073709551613UL}},{{18446744073709551615UL,0xC8L,255UL,65531UL,0x8884C663L,0UL}},{{18446744073709551615UL,0xC8L,255UL,65531UL,0x8884C663L,0UL}}}};
            uint32_t l_140 = 18446744073709551606UL;
            int32_t l_141 = 0x4F871956L;
            int64_t l_167 = 1L;
            uint32_t l_201[2][4][5] = {{{1UL,0UL,6UL,0x18678765L,0x6A9738C8L},{0x86F06635L,0UL,0x18678765L,0xEC2D120FL,0x2BDFB097L},{8UL,1UL,1UL,8UL,0xEC2D120FL},{0x86F06635L,0UL,0x6A9738C8L,0xED502434L,0xEC2D120FL}},{{1UL,0x86F06635L,0x2BDFB097L,6UL,0x2BDFB097L},{6UL,6UL,0xEC2D120FL,0xED502434L,0x6A9738C8L},{0x13064C4DL,4294967295UL,0xEC2D120FL,8UL,1UL},{0x18678765L,0xEC2D120FL,0x2BDFB097L,0xEC2D120FL,0x18678765L}}};
            uint64_t l_202[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_202[i] = 0x363783EF79E816EFLL;
            if (((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((g_127[1][0][0] , ((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((g_68++), (-3L))) || ((safe_div_func_int32_t_s_s(7L, ((~((safe_lshift_func_uint8_t_u_s(((l_139[1][2][0] , g_127[1][0][0].f0) && 1L), g_127[1][0][0].f5)) <= g_127[1][0][0].f2)) , p_25))) >= l_140)), 0UL)) , g_119)), l_141)), 4)) | 65527UL))
            { 
                uint64_t l_146 = 0UL;
                int32_t l_168 = (-6L);
                g_147 = ((g_127[1][0][0].f5 | (l_62.f4 = (g_11 = g_127[1][0][0].f4))) , (safe_lshift_func_int8_t_s_s((p_22 | (((g_11 |= ((((safe_add_func_int32_t_s_s(p_22, l_146)) & p_22) <= g_127[1][0][0].f5) > p_22)) ^ (-3L)) > l_76.f3)), p_25)));
                l_168 ^= (((safe_mul_func_uint16_t_u_u((((g_150[4][0]--) | (safe_mod_func_int64_t_s_s((((!(safe_add_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((l_62.f4 ^= (safe_lshift_func_int8_t_s_s((p_22 >= (safe_sub_func_uint32_t_u_u(((((p_24 = ((((l_164 , (((l_92 , ((safe_lshift_func_uint8_t_u_s((g_127[1][0][0].f2 == g_2), 6)) ^ g_127[1][0][0].f3)) && p_23) < g_127[1][0][0].f0)) ^ g_11) && p_24) || g_68)) || g_127[1][0][0].f2) == l_167) , g_127[1][0][0].f3), l_140))), p_23))), g_68)), l_139[1][2][0].f0))) <= g_119) == 0x3CF2E7E6B1039D6ALL), l_62.f0))) < 0x7FL), p_22)) , p_23) ^ l_49[4]);
                g_119 |= ((l_169 = (l_139[1][2][0].f4 = (l_49[4] , (l_62.f4 = (((0x98L | l_62.f1) , (((g_127[1][0][0] , l_168) >= g_127[1][0][0].f5) != l_139[1][2][0].f2)) == g_147))))) || g_127[1][0][0].f4);
            }
            else
            { 
                int32_t l_173[3][3][1];
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_173[i][j][k] = 0L;
                    }
                }
                --g_174;
                l_202[0] ^= (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int64_t_s_s((safe_div_func_int32_t_s_s(g_11, (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_201[1][2][0] = (safe_mul_func_int8_t_s_s(7L, (safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s((((p_22 > l_173[0][1][0]) , g_127[1][0][0].f4) != g_171), l_62.f4)) == l_164.f0) >= g_127[1][0][0].f5), l_173[2][1][0])), g_172[0][0][0]))))), p_24)), 7UL)) >= 3L), p_25)), 11)))), p_25)) >= g_171), 3)), g_119));
            }
            l_139[1][2][0].f4 = (safe_sub_func_int8_t_s_s((p_24 ^ ((safe_mod_func_uint32_t_u_u(p_22, (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((l_76.f4 ^= g_127[1][0][0].f2), (safe_sub_func_int64_t_s_s(l_76.f5, p_24)))), 14)))) || l_139[1][2][0].f5)), p_22));
        }
    }
    g_119 |= (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((((!l_49[4]) | (safe_mul_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(0xD491631D6AA01866LL, 0xFEFEAB5394E2B856LL)) , (safe_mul_func_int8_t_s_s(0x30L, p_22))), g_172[1][2][0]))) >= l_62.f1), 0xEC46L)) , 8L), 1));
    return l_49[4];
}



static uint32_t  func_28(int32_t  p_29, struct S0  p_30, int8_t  p_31, int8_t  p_32, uint8_t  p_33)
{ 
    uint32_t l_36[1];
    int32_t l_37 = (-10L);
    int i;
    for (i = 0; i < 1; i++)
        l_36[i] = 18446744073709551614UL;
    for (g_11 = 0; g_11 < 1; g_11 += 1)
    {
        l_36[g_11] = 0x830AE734L;
    }
    l_37 = g_11;
    return p_30.f2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_127[i][j][k].f0, "g_127[i][j][k].f0", print_hash_value);
                transparent_crc(g_127[i][j][k].f1, "g_127[i][j][k].f1", print_hash_value);
                transparent_crc(g_127[i][j][k].f2, "g_127[i][j][k].f2", print_hash_value);
                transparent_crc(g_127[i][j][k].f3, "g_127[i][j][k].f3", print_hash_value);
                transparent_crc(g_127[i][j][k].f4, "g_127[i][j][k].f4", print_hash_value);
                transparent_crc(g_127[i][j][k].f5, "g_127[i][j][k].f5", print_hash_value);

            }
        }
    }
    transparent_crc(g_147, "g_147", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_150[i][j], "g_150[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_171, "g_171", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_172[i][j][k], "g_172[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_174, "g_174", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_224[i][j], "g_224[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_242[i][j][k].f0, "g_242[i][j][k].f0", print_hash_value);
                transparent_crc(g_242[i][j][k].f1, "g_242[i][j][k].f1", print_hash_value);
                transparent_crc(g_242[i][j][k].f2, "g_242[i][j][k].f2", print_hash_value);
                transparent_crc(g_242[i][j][k].f3, "g_242[i][j][k].f3", print_hash_value);
                transparent_crc(g_242[i][j][k].f4, "g_242[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_274.f0, "g_274.f0", print_hash_value);
    transparent_crc(g_274.f1, "g_274.f1", print_hash_value);
    transparent_crc(g_274.f2, "g_274.f2", print_hash_value);
    transparent_crc(g_274.f3, "g_274.f3", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
