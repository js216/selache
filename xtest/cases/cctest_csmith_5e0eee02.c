// SPDX-License-Identifier: MIT
// cctest_csmith_5e0eee02.c --- cctest case csmith_5e0eee02 (csmith seed 1578036738)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa108919f */
/* @exp_ticks 0x3bba */

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

// Options:   -s 1578036738 -o /tmp/csmith_gen_0o8bs_v5/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint32_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
   const int32_t  f1;
   uint64_t  f2;
   const struct S0  f3;
   uint64_t  f4;
   int32_t  f5;
};
#pragma pack(pop)

union U2 {
   const struct S1  f0;
};

union U3 {
   int64_t  f0;
   uint32_t  f1;
};


static int32_t g_17 = 8L;
static int32_t g_21 = 1L;
static uint8_t g_26 = 2UL;
static uint32_t g_100 = 18446744073709551607UL;
static int8_t g_112 = (-7L);
static uint16_t g_114 = 65535UL;
static int16_t g_124 = 0x8ED2L;
static union U3 g_131 = {-7L};
static int16_t g_139 = 0xA862L;
static uint32_t g_142 = 1UL;
static int32_t g_173 = 2L;
static struct S0 g_240 = {0x43A77B9CL,4294967295UL};
static uint64_t g_244[4] = {0x4B02573FF7721BB3LL,0x4B02573FF7721BB3LL,0x4B02573FF7721BB3LL,0x4B02573FF7721BB3LL};
static int32_t g_261 = 0L;
static uint16_t g_312 = 9UL;
static union U2 g_322 = {{0x0C9BAA3EL,0L,0x405BCD4A83E69CA9LL,{0x485B82C6L,0xD85AF8C4L},0UL,-1L}};
static uint8_t g_363 = 2UL;
static uint64_t g_366[2][2] = {{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL}};



static int8_t  func_1(void);
static int32_t  func_2(uint32_t  p_3, const int8_t  p_4);
static uint32_t  func_7(union U3  p_8, union U3  p_9, uint8_t  p_10);
static union U3  func_11(int32_t  p_12, union U2  p_13, uint64_t  p_14, struct S0  p_15, int8_t  p_16);




static int8_t  func_1(void)
{ 
    int8_t l_18 = 0xB7L;
    union U2 l_27 = {{0x53FFD03BL,0x5A8DF044L,1UL,{18446744073709551615UL,0xCC5C6A3FL},0x540EE1D4595A2E71LL,0xC51978E6L}};
    uint16_t l_28 = 2UL;
    union U3 l_132 = {0xC3CA6ABCE84173BBLL};
    int32_t l_174 = 0L;
    uint32_t l_315 = 18446744073709551608UL;
    union U2 l_360 = {{0xE31C68CDL,2L,18446744073709551615UL,{0xE6784F50L,1UL},1UL,0xEAE81287L}};
    struct S0 l_361 = {9UL,0xF74E81C6L};
    l_315 = func_2((safe_add_func_uint32_t_u_u((l_174 = func_7((g_131 = func_11((((((g_17 |= 0x1C58L) == l_18) <= (safe_add_func_uint64_t_u_u((g_21 &= 0xB15E314A5EA964A9LL), (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((g_26 >= g_26) < 0x1A79L), l_18)), 5))))) < g_26) == l_18), l_27, l_28, l_27.f0.f3, l_27.f0.f4)), l_132, g_112)), l_132.f0)), l_132.f0);
    if ((safe_sub_func_int16_t_s_s(0L, (((0x7DB5L > (!(safe_unary_minus_func_int64_t_s((((g_322 , l_174) && l_27.f0.f3.f0) > l_18))))) && l_27.f0.f4) < (-6L)))))
    { 
        const int64_t l_328 = 0L;
        for (l_174 = (-27); (l_174 > 11); ++l_174)
        { 
            for (l_132.f1 = 0; (l_132.f1 > 55); l_132.f1++)
            { 
                g_173 |= (~l_328);
            }
        }
        g_173 ^= ((!((safe_div_func_uint16_t_u_u(((g_240.f1 = (1L != (g_112 , (safe_mod_func_uint16_t_u_u((g_322.f0.f3.f1 | (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_mod_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((g_124 ^= (safe_div_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((0x68E0L & g_244[1]) || g_244[1]), l_27.f0.f3.f0)) , g_322.f0.f2), l_328)) || g_131.f1) && 0UL), 1L))), g_322.f0.f1)) || g_21), g_322.f0.f1)) != 0UL) < 0x89C775E3197AD65FLL), 0)), l_328)) > l_328), 7)), 2))), 0x0422L))))) < 0x0B963346L), g_21)) && g_21)) ^ l_27.f0.f5);
    }
    else
    { 
        int32_t l_356 = 1L;
        for (l_28 = 11; (l_28 > 37); l_28 = safe_add_func_uint16_t_u_u(l_28, 4))
        { 
            const int64_t l_359[2] = {0x13A266237AAD99B4LL,0x13A266237AAD99B4LL};
            int32_t l_362 = 0x027C97B5L;
            int i;
            l_362 ^= (safe_mul_func_uint16_t_u_u(l_356, ((((((safe_mul_func_uint16_t_u_u(((l_174 = ((((l_359[0] & (func_11(l_27.f0.f5, l_360, l_359[0], l_361, g_322.f0.f1) , 0x4FL)) != 65530UL) > g_142) > g_139)) > g_322.f0.f5), 0xA469L)) > g_142) == 65535UL) , l_359[0]) , 0UL) >= 0xF221C545L)));
        }
        g_21 = 6L;
        --g_363;
    }
    return g_366[0][1];
}



static int32_t  func_2(uint32_t  p_3, const int8_t  p_4)
{ 
    struct S0 l_202 = {18446744073709551610UL,0x85F7CE25L};
    int32_t l_203 = 0L;
    const uint16_t l_204 = 0x7FDEL;
    int32_t l_205 = 0x763CE0EBL;
    uint8_t l_295 = 1UL;
    if ((safe_sub_func_uint16_t_u_u((((g_17 == (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((l_205 = (l_203 = (safe_unary_minus_func_uint16_t_u((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s((((((((safe_lshift_func_uint8_t_u_u((((~(safe_mod_func_uint8_t_u_u((!(safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((g_131.f1 , (safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s((l_202 , p_4), l_202.f0)), p_4)), p_3))), l_203)) , l_203), 0xD295L))), g_139))) || g_124) <= g_124), 4)) | 248UL) ^ 0x7892L) == p_4) || l_204) , 0x8AL) <= l_202.f0), 15)) > l_203), 9L)))))), 7)), g_100))) | 1L) == g_142), g_100)))
    { 
        int8_t l_208 = 0x44L;
        int32_t l_209[3][5][3] = {{{0L,(-1L),0x7823F575L},{0x55B11B79L,(-2L),0xD509144EL},{0L,0L,0xD509144EL},{(-2L),0x55B11B79L,0x7823F575L},{(-1L),0L,1L}},{{(-1L),(-2L),0xC891D4E8L},{(-2L),(-1L),1L},{0L,(-1L),0x7823F575L},{0x55B11B79L,(-2L),0xD509144EL},{0L,0L,0xD509144EL}},{{(-2L),0x55B11B79L,0x7823F575L},{(-1L),0L,1L},{0L,(-1L),0xD5F7C6F1L},{(-1L),0L,0x55B11B79L},{1L,0L,0xD1255F10L}}};
        int i, j, k;
        l_209[2][1][2] |= ((safe_mul_func_uint8_t_u_u((l_208 = (l_203 = (l_205 = p_3))), (p_3 & l_202.f0))) > (p_4 || p_4));
    }
    else
    { 
        int32_t l_216 = 0xFF64A250L;
        int16_t l_231[4] = {0x0077L,0x0077L,0x0077L,0x0077L};
        int32_t l_236[1];
        struct S0 l_241 = {18446744073709551608UL,3UL};
        int i;
        for (i = 0; i < 1; i++)
            l_236[i] = 0xE66DB85BL;
        for (g_112 = (-9); (g_112 < (-20)); --g_112)
        { 
            int8_t l_230 = 7L;
            int32_t l_232 = 0x3EFAEFD5L;
            int32_t l_238 = (-1L);
            union U2 l_239 = {{0UL,0x88577587L,0x81F8F2C4CA5D1E98LL,{0xFDFE881FL,0xA3D568A4L},18446744073709551615UL,0x3001A50DL}};
            if ((p_3 == (l_205 &= ((safe_sub_func_int16_t_s_s(l_203, ((((safe_mul_func_uint8_t_u_u(((((g_26 = g_112) ^ l_216) != g_124) , 248UL), l_204)) == g_21) ^ p_4) <= l_203))) <= 4294967287UL))))
            { 
                g_173 ^= 2L;
            }
            else
            { 
                uint16_t l_217 = 0x16F7L;
                l_217++;
            }
            g_173 = 7L;
            if ((l_205 = (safe_add_func_uint16_t_u_u((((((((safe_mod_func_int64_t_s_s(l_216, 1UL)) && p_3) & (safe_rshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((l_216 || g_17), g_124)), 0UL)) == 0x73L) <= g_131.f0), l_230))) ^ l_231[2]) != l_230) || g_173) >= g_21), 0x1900L))))
            { 
                uint16_t l_235 = 9UL;
                int32_t l_237 = 0x21212FAAL;
                l_232 &= g_114;
                l_238 |= (safe_sub_func_uint64_t_u_u(l_235, ((((l_237 = (p_3 & (l_236[0] = ((l_232 = 1UL) && (((5L >= g_100) || 0x0CL) || 5L))))) && p_3) & 0UL) && 1UL)));
                l_205 = ((l_202.f1 == ((p_4 == ((func_11(g_131.f1, l_239, p_4, g_240, g_17) , l_241) , p_3)) < g_139)) >= 8UL);
            }
            else
            { 
                int32_t l_242 = (-2L);
                int32_t l_243[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_243[i][j] = 0x20F26A5DL;
                }
                g_244[1]--;
                if (l_205)
                    break;
                return p_4;
            }
        }
        for (l_216 = 0; (l_216 == (-17)); l_216--)
        { 
            uint8_t l_251 = 0x62L;
            for (g_100 = 0; (g_100 == 29); ++g_100)
            { 
                int32_t l_269 = 0L;
                --l_251;
                l_203 = ((((l_269 ^= (safe_add_func_int64_t_s_s((((!((safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((g_261 <= (((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(((-6L) && 0x51L))), 4)) >= (safe_rshift_func_uint16_t_u_u((--g_114), 2))) != p_3)), l_205)), p_3)) < g_112)) & l_251) != g_17), 0x6C6973A35D59E726LL))) , p_3) <= p_4) >= 1L);
            }
        }
        for (g_131.f0 = 3; (g_131.f0 >= 0); g_131.f0 -= 1)
        { 
            uint16_t l_283[2];
            union U3 l_290[5] = {{0x244529B8D93B7011LL},{0x244529B8D93B7011LL},{0x244529B8D93B7011LL},{0x244529B8D93B7011LL},{0x244529B8D93B7011LL}};
            int32_t l_296 = 1L;
            int i;
            for (i = 0; i < 2; i++)
                l_283[i] = 0xD116L;
            for (g_261 = 0; (g_261 <= 3); g_261 += 1)
            { 
                int32_t l_282 = 0xB2345C93L;
                int i;
                l_283[1] = (safe_lshift_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u(l_231[g_261], g_244[g_131.f0])), (((((l_282 = (safe_lshift_func_uint16_t_u_s((0x29C7E725L <= (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((0UL > 0xE4L), g_244[g_131.f0])), g_244[g_131.f0]))), g_244[g_131.f0]))) || 1UL) ^ 0x0D3EL) ^ l_231[2]) & 0x5D8FL))) || g_26), p_4));
                if (p_4)
                    break;
            }
            l_296 = ((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(l_231[g_131.f0], (((l_236[0] = (((safe_lshift_func_int8_t_s_u((((g_244[g_131.f0] ^ ((l_290[2] , (safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((((p_3 < 0x2C6D3FC99DC513A4LL) < p_4) , p_4), g_244[g_131.f0])), (-2L)))) >= l_231[2])) || p_3) , p_4), 0)) & g_244[1]) >= g_124)) <= 0x9FC88F51L) | p_4))), p_3)) & l_295);
        }
    }
    for (g_142 = 0; (g_142 <= 3); g_142 += 1)
    { 
        int32_t l_305 = 0x9EC8A6BBL;
        int32_t l_311 = 0x26E96902L;
        int i;
        l_205 = (g_244[g_142] < (safe_add_func_int32_t_s_s((((((safe_sub_func_uint64_t_u_u(0x724B2F69E9B9EE40LL, ((safe_mod_func_uint64_t_u_u(p_3, g_131.f1)) <= 0x46DCAA26L))) < g_244[g_142]) , p_4) & 0xE7AD20B7L) > 9L), p_3)));
        if (((((g_142 & 0xB117L) == ((0UL <= (safe_mod_func_int32_t_s_s(((g_244[g_142] |= (247UL < l_295)) , g_244[g_142]), (-6L)))) & l_202.f1)) == g_139) >= l_305))
        { 
            uint64_t l_306 = 0xC99A56468F960012LL;
            int32_t l_309 = 0xE5476D4BL;
            int32_t l_310 = 0xBCACFD49L;
            for (g_261 = 0; (g_261 <= 3); g_261 += 1)
            { 
                int i;
                if (g_244[g_261])
                    break;
            }
            l_306++;
            g_312++;
        }
        else
        { 
            for (l_295 = 0; (l_295 <= 3); l_295 += 1)
            { 
                if (g_21)
                    break;
            }
        }
    }
    return l_203;
}



static uint32_t  func_7(union U3  p_8, union U3  p_9, uint8_t  p_10)
{ 
    int32_t l_133 = 0xA0ACF185L;
    int32_t l_140 = 0x7CABE74AL;
    int64_t l_151 = 0L;
    struct S0 l_152 = {0x53F318A4L,0xB99B8081L};
    uint64_t l_172 = 0x721F5EDDB6F6008FLL;
    l_133 = 0x1FB248A1L;
    for (p_10 = 0; (p_10 <= 2); ++p_10)
    { 
        int8_t l_136 = 0x8BL;
        int32_t l_137 = 1L;
        int8_t l_138 = 1L;
        int32_t l_141 = 1L;
        union U2 l_153 = {{0x2203A28BL,-4L,18446744073709551608UL,{0x04D7DB42L,4294967295UL},1UL,0x6B426EB4L}};
        g_142--;
        g_21 = (((safe_sub_func_int16_t_s_s((((0xFC003BC58EBAA32BLL ^ (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((l_151 && (l_152 , (((l_153 , g_100) && l_152.f0) <= p_8.f0))) | l_152.f1), p_10)), p_8.f0))) , l_140) && l_152.f1), g_114)) , 0x82A7L) , 0x48EE826CL);
        l_137 = (((safe_add_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s((((l_136 <= (safe_mod_func_int32_t_s_s(g_21, 8UL))) > (((l_141 = (safe_add_func_int32_t_s_s((g_173 = (safe_mul_func_uint16_t_u_u(((((g_17 = (safe_rshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s((((safe_mul_func_int8_t_s_s(l_133, l_172)) != l_153.f0.f4) , g_124), g_131.f0)) ^ l_153.f0.f3.f0), p_9.f1))) & l_172) < g_26) > l_153.f0.f1), 0x6E6AL))), 4294967295UL))) ^ 7UL) > p_8.f1)) , 1UL), 5)) == 251UL), 7L)) != l_153.f0.f5) , 0L);
    }
    return p_8.f1;
}



static union U3  func_11(int32_t  p_12, union U2  p_13, uint64_t  p_14, struct S0  p_15, int8_t  p_16)
{ 
    const uint64_t l_31 = 0UL;
    int32_t l_36 = (-1L);
    int32_t l_113 = 0x00924423L;
    union U3 l_119[2] = {{0xC80A0586BC1F71C7LL},{0xC80A0586BC1F71C7LL}};
    union U3 l_130 = {0x8B0F682D672FAF5CLL};
    int i;
    if ((((p_13.f0 , (safe_mul_func_int16_t_s_s(l_31, ((safe_lshift_func_int16_t_s_s(0x50E8L, 7)) , ((l_31 & 1UL) == g_26))))) && p_13.f0.f4) | l_31))
    { 
        int64_t l_41 = 0x5B04CE9D0615A034LL;
        uint64_t l_50 = 1UL;
        int32_t l_51[5];
        union U3 l_60 = {0xCDCE3FF50EDC6758LL};
        union U2 l_63 = {{0x47E9E582L,0L,0xB0C4F586FD7422E2LL,{0x3AD2D1E5L,0x78C6C423L},1UL,0xEBA052C4L}};
        int64_t l_97[4][2][5] = {{{0x296F1EF3A5E7C9E8LL,0x296F1EF3A5E7C9E8LL,1L,1L,0x296F1EF3A5E7C9E8LL},{(-7L),0x70C459F779DD1F38LL,(-7L),0x70C459F779DD1F38LL,(-7L)}},{{0x296F1EF3A5E7C9E8LL,1L,1L,0x296F1EF3A5E7C9E8LL,0x296F1EF3A5E7C9E8LL},{1L,0x70C459F779DD1F38LL,1L,0x70C459F779DD1F38LL,1L}},{{0x296F1EF3A5E7C9E8LL,0x296F1EF3A5E7C9E8LL,1L,1L,0x296F1EF3A5E7C9E8LL},{(-7L),0x70C459F779DD1F38LL,(-7L),0x70C459F779DD1F38LL,(-7L)}},{{0x296F1EF3A5E7C9E8LL,1L,1L,0x296F1EF3A5E7C9E8LL,0x296F1EF3A5E7C9E8LL},{1L,0x70C459F779DD1F38LL,1L,0x70C459F779DD1F38LL,1L}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_51[i] = (-1L);
lbl_59:
        l_36 |= (g_21 = (safe_sub_func_int64_t_s_s(l_31, 0x2E84CBF7762406C4LL)));
        if (((safe_div_func_int8_t_s_s(g_26, 1UL)) & (((safe_rshift_func_uint8_t_u_u((((g_17 , p_12) >= g_21) == g_17), g_21)) <= 9L) >= l_41)))
        { 
            l_51[1] = ((p_13.f0.f5 <= (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(5UL, (l_41 ^ ((safe_sub_func_uint32_t_u_u((((((safe_sub_func_int16_t_s_s(p_13.f0.f5, 8L)) != p_15.f0) && p_15.f0) , p_13.f0.f5) <= 1L), (-1L))) > l_50)))), p_14))) & l_36);
        }
        else
        { 
            uint8_t l_57 = 0xE4L;
            union U3 l_58 = {0x6802143632CBEB03LL};
            for (l_50 = 0; (l_50 <= 4); l_50 += 1)
            { 
                int32_t l_52 = (-8L);
                int i;
                l_36 = ((l_52 = (l_51[l_50] = (l_51[l_50] , 0xBFBD42F9L))) == p_12);
            }
            if ((l_50 == ((p_14 = (~(((~l_51[1]) > (safe_mul_func_int8_t_s_s(p_13.f0.f3.f1, ((l_57 = g_26) & 3UL)))) == 1L))) || l_57)))
            { 
                return l_58;
            }
            else
            { 
                if (p_13.f0.f1)
                    goto lbl_59;
                return l_60;
            }
        }
        if ((l_51[1] = (g_21 | ((safe_rshift_func_uint8_t_u_u((l_63 , (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(l_60.f1, ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_17, l_51[1])), 11)) <= p_16))), 5))), p_15.f1)) > l_63.f0.f2))))
        { 
            uint16_t l_72 = 0UL;
            struct S0 l_83 = {0x103C2894L,0UL};
            int32_t l_84 = (-3L);
            int32_t l_99 = 8L;
            --l_72;
            for (l_60.f1 = (-21); (l_60.f1 >= 14); l_60.f1 = safe_add_func_int16_t_s_s(l_60.f1, 9))
            { 
                l_51[4] = ((safe_sub_func_int64_t_s_s((((6L && (p_14 &= (safe_rshift_func_int16_t_s_s((l_84 = (0UL | (safe_rshift_func_uint8_t_u_s((l_60.f1 | (((l_83 , p_15.f1) | 0xB8L) <= (-3L))), 5)))), p_13.f0.f3.f0)))) >= l_51[1]) < p_13.f0.f0), g_26)) & g_21);
            }
            if ((!(safe_div_func_uint16_t_u_u((l_31 && l_63.f0.f3.f1), (~(safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((((l_72 , ((safe_sub_func_int8_t_s_s(((g_21 <= l_83.f1) <= l_97[2][0][3]), p_13.f0.f0)) , 0x25A641CEL)) & 0UL) > (-10L)), 4294967295UL)), 0xF363BB6AL)), l_63.f0.f2)))))))
            { 
                int64_t l_98[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_98[i] = (-1L);
                ++g_100;
            }
            else
            { 
                uint64_t l_103 = 0xDB386A5B839CC85BLL;
                l_103--;
            }
        }
        else
        { 
            l_36 = g_17;
        }
    }
    else
    { 
        int32_t l_106[1];
        int32_t l_107 = 0xB49A5ABFL;
        int32_t l_108 = 0x1103C6C2L;
        int32_t l_109 = 0x17CC220CL;
        int32_t l_110 = 0x3FCDF6E6L;
        int32_t l_111[2][5][5] = {{{0x15013F2CL,(-1L),0L,0L,(-1L)},{0xE61C728FL,(-1L),(-6L),(-1L),0xE61C728FL},{(-1L),0L,0L,(-1L),0x15013F2CL},{5L,(-1L),5L,0xB709D1F7L,5L},{(-1L),(-1L),0x079F8D1BL,0L,0x15013F2CL}},{{0xE61C728FL,0xB709D1F7L,(-6L),0xB709D1F7L,0xE61C728FL},{0x15013F2CL,0L,0x079F8D1BL,(-1L),(-1L)},{5L,0xB709D1F7L,5L,(-1L),5L},{0x15013F2CL,(-1L),0L,0L,(-1L)},{0xE61C728FL,(-1L),(-6L),(-1L),0xE61C728FL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_106[i] = 0x9AD4046EL;
        g_114--;
    }
    for (g_114 = 10; (g_114 >= 15); g_114++)
    { 
        return l_119[0];
    }
    for (p_12 = 0; (p_12 == (-5)); p_12--)
    { 
        uint8_t l_129[5] = {255UL,255UL,255UL,255UL,255UL};
        int i;
        l_113 = (((safe_add_func_uint64_t_u_u((((((p_14++) < (-4L)) ^ (safe_div_func_uint64_t_u_u((((l_119[0].f0 & 0x9EL) ^ (l_119[0].f1 , p_12)) != p_13.f0.f3.f0), l_129[0]))) ^ p_13.f0.f4) || p_13.f0.f1), g_114)) < 1L) != g_17);
        return l_119[1];
    }
    return l_130;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_131.f0, "g_131.f0", print_hash_value);
    transparent_crc(g_131.f1, "g_131.f1", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_240.f0, "g_240.f0", print_hash_value);
    transparent_crc(g_240.f1, "g_240.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_244[i], "g_244[i]", print_hash_value);

    }
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_322.f0.f0, "g_322.f0.f0", print_hash_value);
    transparent_crc(g_322.f0.f1, "g_322.f0.f1", print_hash_value);
    transparent_crc(g_322.f0.f2, "g_322.f0.f2", print_hash_value);
    transparent_crc(g_322.f0.f3.f0, "g_322.f0.f3.f0", print_hash_value);
    transparent_crc(g_322.f0.f3.f1, "g_322.f0.f3.f1", print_hash_value);
    transparent_crc(g_322.f0.f4, "g_322.f0.f4", print_hash_value);
    transparent_crc(g_322.f0.f5, "g_322.f0.f5", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_366[i][j], "g_366[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
